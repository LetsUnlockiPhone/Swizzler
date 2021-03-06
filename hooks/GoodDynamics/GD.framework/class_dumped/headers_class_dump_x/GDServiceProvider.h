/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_CATransform3DMakeScale.h"

@class NSArray, NSString, UIImage;

@interface GDServiceProvider : _CATransform3DMakeScale
{
    NSString *identifier;
    NSString *version;
    NSString *name;
    NSString *address;
    UIImage *icon;
    NSArray *serverCluster;
    NSArray *services;
}

- (void)setServices:(id)fp8;
- (id)services;
- (void)setServerCluster:(id)fp8;
- (id)serverCluster;
- (void)setIcon:(id)fp8;
- (id)icon;
- (void)setAddress:(id)fp8;
- (id)address;
- (void)setName:(id)fp8;
- (id)name;
- (void)setVersion:(id)fp8;
- (id)version;
- (void)setIdentifier:(id)fp8;
- (id)identifier;
- (void)dealloc;
- (id)init;

@end

