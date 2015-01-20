/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLDevice>, MTLToolsPointerArray, NSString;

@interface MTLToolsBuffer : MTLToolsResource <MTLBuffer> {
    MTLToolsPointerArray *_textures;
}

@property(readonly) unsigned long long cpuCacheMode;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) <MTLDevice> * device;
@property(readonly) unsigned long long hash;
@property(copy) NSString * label;
@property(readonly) unsigned long long length;
@property(readonly) Class superclass;
@property(readonly) MTLToolsPointerArray * textures;

- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (void*)contents;
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;
- (unsigned long long)length;
- (id)newTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;
- (id)textures;

@end