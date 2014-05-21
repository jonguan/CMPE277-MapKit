//
//  FirstViewController.m
//  CMPE277-MapKit
//
//  Created by Jon Guan on 5/5/14.
//  Copyright (c) 2014 Scanadu, Inc. All rights reserved.
//

#import "MapViewController.h"
#import "MapPlotViewController.h"

@interface MapViewController ()

@end

@implementation MapViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
 
}

- (void)awakeFromNib
{
    [super awakeFromNib];
    UITapGestureRecognizer *tapRecognizer = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(dismissKeyboard)];
    [self.view addGestureRecognizer:tapRecognizer];
    
}
- (void)dismissKeyboard
{
    [self.view endEditing:YES];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([segue.identifier isEqualToString:@"plotAddrSegue"]) {
        MapPlotViewController *plotVC = segue.destinationViewController;
        plotVC.addressQuery = [NSString stringWithFormat: @"%@ %@ %@ %@", _address.text, _city.text, _state.text, _zip.text];
        
    }
}




@end
