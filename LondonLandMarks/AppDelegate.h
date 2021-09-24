//
//  AppDelegate.h
//  LondonLandMarks
//
//  Created by Mustafa Kılınç on 24.09.2021.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;

- (void)saveContext;


@end

