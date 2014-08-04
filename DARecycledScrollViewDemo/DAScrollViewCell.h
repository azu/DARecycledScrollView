//
//  DAScrollViewCell.h
//  DARecycledScrollViewDemo
//
//  Created by Daria Kopaliani on 6/21/13.
//  Copyright (c) 2013 Daria Kopaliani. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DARecycledScrollView.h"


@class DARecycledScrollView;

@interface DAScrollViewCell : UITableViewCell <DARecycledScrollViewDelegate>

@property (strong, nonatomic) NSArray *images;
@property (readonly, strong, nonatomic) DARecycledScrollView *scrollView;

@end
