//
//  MFF.h
//  MultiFirefox
//
//  Created by David Martorana on 4/7/08.
//  Copyright 2008. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface MFF : NSObject {

}

+ (void) openFirefoxProfilesWindow:(NSString *)version newInstance:(BOOL)force;
+ (BOOL) multipleProfilesExist;
+ (NSArray *) profilesList;
+ (NSArray *) versionsList;
+ (void) launchFirefox:(NSString *)version withProfile:(NSString *)profile newInstance:(BOOL)force;
+ (NSString *) getFirefoxPath:(NSString *)version;
+ (void) createApplicationWithVersion:(NSString *)version andProfile:(NSString *)profile;

@end
