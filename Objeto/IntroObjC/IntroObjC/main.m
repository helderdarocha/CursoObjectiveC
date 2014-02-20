//
//  main.m
//  IntroObjC
//
//  Created by Helder Da Rocha on 2/18/14.
//  Copyright (c) 2014 Argo Navis. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        NSDate *before = [[NSDate alloc] init];
        //sleep(2);
        NSDate *after  = [before dateByAddingTimeInterval:2];
        NSLog(@"Antes %p\ne Depois %p\n", before, after);
        
        id a = nil;
        [a timeIntervalSince1970];
        
        double segundosBefore = [before timeIntervalSince1970];
        double segundosAfter  = [after  timeIntervalSince1970];
        NSLog(@"Segundos desde 1970\n%f\n%f", segundosBefore, segundosAfter);
        
        NSCalendar *cal = [NSCalendar currentCalendar];
        NSLog(@"Meu calendario: %@", [cal calendarIdentifier]);
        
        NSUInteger dia = [cal ordinalityOfUnit:NSDayCalendarUnit inUnit:NSMonthCalendarUnit forDate:[NSDate date]];
        NSLog(@"O dia é: %lu", dia);
    }
    return 0;
}

