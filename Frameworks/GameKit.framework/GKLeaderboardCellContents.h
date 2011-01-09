/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class GKAnimatingLabelView, GKScore;



@interface GKLeaderboardCellContents : UIView <GKTableViewCellContents>
{
    GKScore *_score;
    NSUInteger _totalScores;
    BOOL _crossfadeAliasAndName;
    GKAnimatingLabelView *_animatingLabelView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _animatingLabelViewFrame;
}

@property BOOL crossfadeAliasAndName;
@property NSUInteger totalScores;
@property(retain) GKScore *score;


- (void)prepareForReuse;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)init;
- (void)layoutSubviews;
- (void)dealloc;
- (id)score;
- (NSUInteger)totalScores;
- (BOOL)crossfadeAliasAndName;
- (void)setCrossfadeAliasAndName:(BOOL)arg1;
- (void)setScore:(id)arg1;
- (void)setTotalScores:(NSUInteger)arg1;

@end