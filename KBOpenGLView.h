//
//  KBOpenGLView.h
//  KBOpenGLES2_0
//
//  Created by chengshenggen on 6/22/16.
//  Copyright © 2016 Gan Tian. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KBOpenGLView : UIView

-(GLuint)rendImage:(UIImage *)image;

- (void)newFrameReadyAtTime:(GLuint)texture;

-(void)refreshFrame;

@end
