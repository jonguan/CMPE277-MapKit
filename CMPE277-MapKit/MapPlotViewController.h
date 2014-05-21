//
//  MapPlotViewController.h
//  CMPE277-MapKit
//
//  Created by Jon Guan on 5/5/14.
//  Copyright (c) 2014 Scanadu, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface MapPlotViewController : UIViewController <MKMapViewDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (strong, nonatomic) NSString *addressQuery;
@end
