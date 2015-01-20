/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSObject<TSDContainerInfo>, NSString, TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData, TSPObject<TSDOwningAttachment>;

@interface TSDImageInfo : TSDMediaInfo <TSDContainerInfo, TSDMixing, TSSPresetSource, TSSThemedObject, TSKTransformableObject, TSDReducableInfo> {
    struct CGSize { 
        double width; 
        double height; 
    boolmInterpretsUntaggedImageDataAsGeneric;
    TSPData *mAdjustedImageData;
    TSPData *mEnhancedImageData;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mImageData;
    TSDBezierPath *mInstantAlphaPath;
    TSDMaskInfo *mMaskInfo;
    } mNaturalSize;
    TSPData *mOriginalImageData;
    TSDMediaStyle *mStyle;
    TSPData *mThumbnailAdjustedImageData;
    TSPData *mThumbnailImageData;
    TSDBezierPath *mTracedPath;
}

@property(retain) TSPData * adjustedImageData;
@property(getter=isAnchoredToText,readonly) bool anchoredToText;
@property(getter=isAttachedToBodyText,readonly) bool attachedToBodyText;
@property(readonly) bool canPasteAsPDF;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) TSPData * enhancedImageData;
@property(getter=isFloatingAboveText,readonly) bool floatingAboveText;
@property(copy) TSDInfoGeometry * geometry;
@property(readonly) unsigned long long hash;
@property(copy) TSDImageAdjustments * imageAdjustments;
@property(retain) TSPData * imageData;
@property(readonly) TSDMediaStyle * imageStyle;
@property(getter=isInlineWithText,readonly) bool inlineWithText;
@property(retain) TSDBezierPath * instantAlphaPath;
@property bool interpretsUntaggedImageDataAsGeneric;
@property(retain) TSDMaskInfo * maskInfo;
@property bool matchesObjectPlaceholderGeometry;
@property struct CGSize { double x1; double x2; } naturalSize;
@property(retain) TSPData * originalImageData;
@property TSPObject<TSDOwningAttachment> * owningAttachment;
@property(readonly) TSPObject<TSDOwningAttachment> * owningAttachmentNoRecurse;
@property NSObject<TSDContainerInfo> * parentInfo;
@property(readonly) Class superclass;
@property(retain) TSPData * thumbnailAdjustedImageData;
@property(retain) TSPData * thumbnailImageData;
@property(readonly) TSDBezierPath * tracedPath;

+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize { double x1; double x2; })arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)presetKinds;
+ (id)resampleAndConvertImageDataToSRGB:(id)arg1 resampled:(bool*)arg2;

- (void)acceptVisitor:(id)arg1;
- (id)adjustedImageData;
- (bool)canPasteAsPDF;
- (struct CGPoint { double x1; double x2; })centerForReplacingWithNewMedia;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)childInfos;
- (id)commandForTransformingByTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)commandToFlipWithOrientation:(int)arg1;
- (id)commandToReplaceImageData:(id)arg1 withReducedImageData:(id)arg2 associatedHint:(id)arg3;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })computeFullTransform;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (id)copyWithContext:(id)arg1;
- (void)dealloc;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (struct CGSize { double x1; double x2; })defaultOriginalSize;
- (id)enhancedImageData;
- (id)geometry;
- (id)geometryWithMask;
- (id)i_thumbnailForImageData:(id)arg1;
- (id)imageAdjustments;
- (id)imageData;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (id)imageStyle;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)instantAlphaPath;
- (bool)interpretsUntaggedImageDataAsGeneric;
- (bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (bool)isMasked;
- (bool)isPDF;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct ImageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct DataReference {} *x4; struct Reference {} *x5; struct Size {} *x6; struct Reference {} *x7; struct DataReference {} *x8; struct DataReference {} *x9; struct Size {} *x10; struct Path {} *x11; struct ImageAdjustmentsArchive {} *x12; unsigned int x13; boolx14; struct DataReference {} *x15; struct DataReference {} *x16; struct DataReference {} *x17; struct Reference {} *x18; struct Reference {} *x19; struct Reference {} *x20; int x21; unsigned int x22[1]; }*)arg1 unarchiver:(id)arg2;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (bool)maskCanBeReset;
- (id)maskInfo;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)objectForProperty:(int)arg1;
- (id)originalImageData;
- (struct CGSize { double x1; double x2; })originalSize;
- (void)p_setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2;
- (void)p_setImageData:(id)arg1 thumbnailData:(id)arg2;
- (void)p_upgradeImageGeometry;
- (void)p_upgradeImageThumbnail;
- (id)parentInfo;
- (id)presetKind;
- (struct CGSize { double x1; double x2; })rawDataSize;
- (Class)repClass;
- (void)saveToArchive:(struct ImageArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct DrawableArchive {} *x3; struct DataReference {} *x4; struct Reference {} *x5; struct Size {} *x6; struct Reference {} *x7; struct DataReference {} *x8; struct DataReference {} *x9; struct Size {} *x10; struct Path {} *x11; struct ImageAdjustmentsArchive {} *x12; unsigned int x13; boolx14; struct DataReference {} *x15; struct DataReference {} *x16; struct DataReference {} *x17; struct Reference {} *x18; struct Reference {} *x19; struct Reference {} *x20; int x21; unsigned int x22[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setAdjustedImageData:(id)arg1;
- (void)setEnhancedImageData:(id)arg1;
- (void)setExteriorTextWrap:(id)arg1;
- (void)setImageAdjustments:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setInstantAlphaPath:(id)arg1;
- (void)setInterpretsUntaggedImageDataAsGeneric:(bool)arg1;
- (void)setMaskInfo:(id)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setOriginalImageData:(id)arg1;
- (void)setParentInfo:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setThumbnailAdjustedImageData:(id)arg1;
- (void)setThumbnailImageData:(id)arg1;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (struct CGSize { double x1; double x2; })targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)thumbnailAdjustedImageData;
- (id)thumbnailImageData;
- (id)tracedPath;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;

@end