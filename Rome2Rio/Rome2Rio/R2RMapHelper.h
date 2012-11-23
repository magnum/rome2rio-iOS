//
//  R2RMapHelper.h
//  Rome2Rio
//
//  Created by Ash Verdoorn on 17/10/12.
//  Copyright (c) 2012 Rome2Rio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <MapKit/MapKit.h>

#import "R2RSearchStore.h"
#import "R2RAnnotation.h"

//TODO convert these annotations to r2rannotation
//#import "R2RHopAnnotation.h"
//#import "R2RStopAnnotation.h"

@interface R2RMapHelper : NSObject

-(id) initWithData: (R2RSearchStore *) dataStore;

-(NSArray *) getPolylines: (id) segment;
-(id) getPolylineView:(id) polyline;

-(MKMapRect) getSegmentBounds: (id) segment;

-(NSArray *) getRouteStopAnnotations :(R2RRoute *)route;
-(NSArray *) getRouteHopAnnotations :(R2RRoute *)route;

-(id)getAnnotationView :(MKMapView *)mapView annotation:(R2RAnnotation *)annotation;

//-(id)getAnnotationView :(MKMapView *)mapView :(id<MKAnnotation>)annotation;

//-(void)filterAnnotations:(NSArray *)stops:(NSArray *)hops: (MKMapView *) mapView;

-(NSArray *)filterHopAnnotations :(NSArray *)hopAnnotations stopAnnotations:(NSArray *)stopAnnotations regionSpan:(MKCoordinateSpan) span;
-(NSArray *) removeAnnotations :(NSArray *) firstArray :(NSArray *) secondArray;

@end

@interface R2RFlightPolyline : MKPolyline

@end

@interface R2RTrainPolyline : MKPolyline

@end

@interface R2RBusPolyline : MKPolyline

@end

@interface R2RFerryPolyline : MKPolyline

@end

@interface R2RDrivePolyline : MKPolyline

@end

@interface R2RWalkPolyline : MKPolyline

@end

@interface R2RFlightPolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end

@interface R2RTrainPolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end

@interface R2RBusPolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end

@interface R2RFerryPolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end

@interface R2RDrivePolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end

@interface R2RWalkPolylineView : MKPolylineView
-(id) initWithPolyline:(MKPolyline *)polyline;
@end
