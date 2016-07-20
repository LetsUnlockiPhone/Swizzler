/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ABAddressBookAddRecord.h"

#import "CacheObjectProperyAssigning-Protocol.h"

@class NSDate, NSString;

@interface CalendarEvent : _ABAddressBookAddRecord <CacheObjectProperyAssigning>
{
    BOOL _allDay;
    BOOL _canceled;
    BOOL _exception;
    BOOL _originalAllDay;
    unsigned int _occuranceId;
    unsigned int _calendarId;
    unsigned int _recordID;
    NSString *_subject;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_location;
    int _reminderMinutes;
    int _availablity;
    int _response;
    int _attachmentCount;
    int _duration;
    NSDate *_effectiveEndDate;
    NSDate *_originalStartDate;
    NSDate *_originalEndDate;
}

- (void)setOriginalEndDate:(id)fp8;
- (id)originalEndDate;
- (void)setOriginalStartDate:(id)fp8;
- (id)originalStartDate;
- (void)setOriginalAllDay:(BOOL)fp8;
- (BOOL)originalAllDay;
- (void)setEffectiveEndDate:(id)fp8;
- (id)effectiveEndDate;
- (void)setDuration:(int)fp8;
- (int)duration;
- (void)setAttachmentCount:(int)fp8;
- (int)attachmentCount;
- (void)setResponse:(int)fp8;
- (int)response;
- (void)setAvailablity:(int)fp8;
- (int)availablity;
- (void)setReminderMinutes:(int)fp8;
- (int)reminderMinutes;
- (void)setException:(BOOL)fp8;
- (BOOL)exception;
- (void)setCanceled:(BOOL)fp8;
- (BOOL)canceled;
- (void)setAllDay:(BOOL)fp8;
- (BOOL)allDay;
- (void)setLocation:(id)fp8;
- (id)location;
- (void)setEndDate:(id)fp8;
- (id)endDate;
- (void)setStartDate:(id)fp8;
- (id)startDate;
- (void)setSubject:(id)fp8;
- (id)subject;
- (void)setRecordID:(unsigned int)fp8;
- (unsigned int)recordID;
- (void)setCalendarId:(unsigned int)fp8;
- (unsigned int)calendarId;
- (void)setOccuranceId:(unsigned int)fp8;
- (unsigned int)occuranceId;
- (void)assignPropertiesFromObject:(id)fp8;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)fp8;
- (void)updateTransientProperties;
- (void)dealloc;

@end
