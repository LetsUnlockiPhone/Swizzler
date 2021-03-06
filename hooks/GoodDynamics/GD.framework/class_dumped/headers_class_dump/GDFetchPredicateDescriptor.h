//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDFetchSQLDescriptor.h"

@class NSMutableArray, NSPredicate;

@interface GDFetchPredicateDescriptor : GDFetchSQLDescriptor
{
    NSPredicate *_predicate;
    NSMutableArray *_parameters;
    unsigned int _belongingGroup;
}

+ (id)descriptorWithSqlDescriptor:(id)arg1 predicate:(id)arg2;
- (id)parsePredicate:(id)arg1 error:(id *)arg2;
- (id)parseExpression:(id)arg1 operatorType:(unsigned int)arg2 error:(id *)arg3;
- (id)parseFunction:(id)arg1 argument:(id)arg2 error:(id *)arg3;
- (id)parseSubqueryExpression:(id)arg1 functionExpression:(id)arg2 error:(id *)arg3;
- (BOOL)isValidFunctionKeyPath:(id)arg1;
- (id)transformExpressionValue:(id)arg1;
- (id)stringForCompound:(unsigned int)arg1;
- (id)formatForOperator:(unsigned int)arg1 leftOperand:(id)arg2 rightOperand:(id)arg3;
- (void)dealloc;
- (id)initWithSqlDescriptor:(id)arg1 predicate:(id)arg2;

@end

