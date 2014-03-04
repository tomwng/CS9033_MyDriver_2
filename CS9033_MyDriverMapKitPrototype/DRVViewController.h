//
//  DRVViewController.h
//  CS9033_MyDriverMapKitPrototype
//
//  Created by Tom on 3/4/14.
//  Copyright (c) 2014 Tom. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface DRVViewController : UIViewController <MKMapViewDelegate>
@property (strong, nonatomic) IBOutlet MKMapView *mapView;

@end
