//
//  MyImgCollectionViewController.h
//  Photo
//
//  Created by Aleksey on 11.12.2017.
//  Copyright © 2017 Aleksey Vinogradov. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SearchingInfo;

@interface MyImgCollectionViewController : UICollectionViewController

@property (nonatomic, strong) SearchingInfo *selectedInfo;

@end
