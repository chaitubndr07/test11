//
//  XYZViewController.h
//  GooglePlaces
//
//  Created by Sri Lakshmi Nrusimha Mac on 5/13/13.
//  Copyright (c) 2013 org.chinni. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>
#import <CoreLocation/CoreLocation.h>

#define kBgQueue dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0)

#define kGOOGLE_API_KEY @"AIzaSyDqhOqGgfQ23Y5UyiYvz3QXSHrKwTGKq0U"

@interface XYZViewController : UIViewController<MKMapViewDelegate,CLLocationManagerDelegate >
{
    CLLocationManager *locationManager;
    CLLocationCoordinate2D currentCentre;
    int currenDist;
    
}
@property (weak, nonatomic) IBOutlet MKMapView *mapView;

@end

