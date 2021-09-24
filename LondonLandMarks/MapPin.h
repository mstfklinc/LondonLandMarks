//
//  MapPin.h
//  LondonLandMarks
//
//  Created by Mustafa Kılınç on 24.09.2021.
//

#import <Foundation/Foundation.h>
#import <MapKit/MApKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MapPin : NSObject <MKAnnotation>{
    
    CLLocationCoordinate2D coordinate;
    
    
}

@property(nonatomic, assign) CLLocationCoordinate2D coordinate;

@end

NS_ASSUME_NONNULL_END
