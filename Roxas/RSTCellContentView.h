//
//  RSTCellContentView.h
//  Roxas
//
//  Created by Riley Testut on 2/13/17.
//  Copyright © 2017 Riley Testut. All rights reserved.
//

@import UIKit;

@class RSTCellContentChange;

NS_ASSUME_NONNULL_BEGIN

@protocol RSTCellContentView <NSObject>

@property (nonatomic, nullable) id dataSource;
@property (nonatomic, readonly) Protocol *dataSourceProtocol;

@property (nonatomic, nullable) UIView *backgroundView;

- (void)beginUpdates;
- (void)endUpdates;

- (void)addChange:(RSTCellContentChange *)change;

@end



NS_ASSUME_NONNULL_END
