//
//  SecondViewController.h
//  CMPE277-MapKit
//
//  Created by Jon Guan on 5/5/14.
//  Copyright (c) 2014 Scanadu, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import <AddressBook/AddressBook.h>

@interface RouteViewController : UIViewController
@property CLLocationCoordinate2D coordStart;
@property CLLocationCoordinate2D coordEnd;

@property (weak, nonatomic) IBOutlet UITextField *address;
@property (weak, nonatomic) IBOutlet UITextField *city;
@property (weak, nonatomic) IBOutlet UITextField *state;
@property (weak, nonatomic) IBOutlet UITextField *zip;

@property (weak, nonatomic) IBOutlet UITextField *address2;
@property (weak, nonatomic) IBOutlet UITextField *city2;
@property (weak, nonatomic) IBOutlet UITextField *state2;
@property (weak, nonatomic) IBOutlet UITextField *zip2;

- (IBAction)didClickRoute:(id)sender;

@end
