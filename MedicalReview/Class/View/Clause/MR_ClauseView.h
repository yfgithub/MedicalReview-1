//
//  MR_ClauseView.h
//  MedicalReview
//
//  Created by lipeng11 on 13-4-27.
//  Copyright (c) 2013年 medical.review. All rights reserved.
//

#import "MR_RootView.h"

#define DEFAULT_CELL_HEIGHT 50

enum CLAUSE_HEAD_STATE {
    CLAUSE_HEAD_STATE_OPEN = 0,
    CLAUSE_HEAD_STATE_CLOSE = 1,
};

@class MR_ClauseHeadView;

@protocol ClauseDelegate <NSObject>

@optional
- (void)clickClauseHead:(id)sender;

@end

@interface MR_ClauseView : MR_RootView <ClauseDelegate>

@property(nonatomic, retain) NSDictionary *jsonData;
@property(nonatomic, assign) float cellHeight;
@property(nonatomic, retain) id<ClauseDelegate> delegate;
@property(nonatomic, retain) MR_ClauseHeadView *headView;
@property(nonatomic, retain) UIView *contentView;
@property(nonatomic, assign) enum CLAUSE_HEAD_STATE headState;

- (id)initWithFrame:(CGRect)frame cellHeight:(float)cellHeight;
- (float)getAllHeight;

- (void)showHeadState;

@end
