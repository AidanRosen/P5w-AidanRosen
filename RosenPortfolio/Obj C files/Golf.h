//
//  Golf.h
//  
//
//  Created by Rosen, Aidan on 1/15/20.
//
// These values simulate speed and friction
#define speedScale 0.20
#define speedDamping 0.90  // friction rate
#define stopSpeed 5.0
#define golofController_h
#import <UIKit/UIKit.h>
@interface GolfController : UIViewController
@property (weak, nonatomic) IBOutlet UIImageView *ball;
@property (weak, nonatomic) IBOutlet UIImageView *hole;

@property (nonatomic) CGPoint firstPoint;
@property (nonatomic) CGPoint lastPoint;
@property (nonatomic) float ballVelocityX;
@property (nonatomic) float ballVelocityY;
@property (strong, nonatomic) NSTimer *gameTimer;
@end
