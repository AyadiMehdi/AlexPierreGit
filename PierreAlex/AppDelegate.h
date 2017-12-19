//
//  AppDelegate.h
//  PierreAlex
//
//  Created by Ayadi Mehdi on 19/12/2017.
//  Copyright © 2017 fr.univ-lyon2.icom.organisation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

