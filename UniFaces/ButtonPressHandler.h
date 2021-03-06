//
//  ButtonPressHandler.h
//  UniFaces
//
//  Created by seatanners on 1/20/14.
//  Copyright (c) 2014. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ButtonPressListener.h"
#import "UIKeyboardImpl.h"

@interface ButtonPressHandler : NSObject<ButtonPressListener>

@property (strong, nonatomic) UIKeyboardImpl* keyboardImplRef;

- (id)initWithKeyboard:(UIKeyboardImpl*)keyboard;

@end
