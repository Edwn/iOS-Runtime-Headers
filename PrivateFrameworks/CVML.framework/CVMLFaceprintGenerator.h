/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLFaceprintGenerator : CVMLDetector {
    unsigned int  _metalContextPriority;
    BOOL  _useLowPriorityMode;
    struct shared_ptr<vision::mod::ImageDescriptorAugmenterFlip> { 
        struct ImageDescriptorAugmenterFlip {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_DescriptorAugmenter;
    struct shared_ptr<vision::mod::ImageDescriptorProcessorAbstract> { 
        struct ImageDescriptorProcessorAbstract {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceDescriptorImpl;
    struct vImage_Buffer { 
        void *data; 
        unsigned int height; 
        unsigned int width; 
        unsigned int rowBytes; 
    }  m_FaceFrontalizerImageBuffer;
    struct shared_ptr<vision::mod::FaceFrontalizer> { 
        struct FaceFrontalizer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceFrontalizerImpl;
    struct shared_ptr<unsigned char> { 
        char *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  m_FaceFrontalizerWorkingBuffer;
    struct _Geometry2D_size2D_ { 
        float height; 
        float width; 
    }  m_RequiredImageSize;
}

@property (nonatomic, readonly) unsigned int length;

+ (BOOL)shouldDumpDebugIntermediates;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)computeFromBuffer:(struct vImage_Buffer { void *x1; unsigned int x2; unsigned int x3; unsigned int x4; }*)arg1 withChannels:(unsigned int)arg2 error:(id*)arg3;
- (id)computeFromPixelBuffer:(struct __CVBuffer { }*)arg1 withChannels:(unsigned int)arg2 error:(id*)arg3;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)length;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 warningRecorder:(id)arg3 error:(id*)arg4;

@end
