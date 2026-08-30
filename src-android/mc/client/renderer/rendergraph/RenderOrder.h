#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Pass.h"
#include "mc/client/renderer/rendergraph/PassBuilderInterface.h"
#include "mc/client/renderer/rendergraph/Resource.h"
#include "mc/client/renderer/rendergraph/ResourceEvent.h"
#include "mc/client/renderer/rendergraph/ValidationResult.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/renderer/hal/FrameBufferDescription.h"
#include "mc/deps/renderer/hal/TextureDescription.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class APIResourcePool; }
namespace rendergraph { class BindInterface; }
namespace rendergraph { class DeclarationInterface; }
namespace rendergraph { class FrameBufferBuilder; }
namespace rendergraph { class LinkInterface; }
namespace rendergraph { class PassBuilderInterface; }
namespace rendergraph { class RenderContext; }
namespace rendergraph { struct ResourceBinding; }
// clang-format on

namespace rendergraph {

class RenderOrder {
public:
    // RenderOrder inner types declare
    // clang-format off
    struct PassStorage;
    struct ResourceStorage;
    struct PassRegistry;
    struct ResourceEventRegistry;
    // clang-format on

    // RenderOrder inner types define
    struct PassStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<rendergraph::Pass>>> mPasses;
        ::ll::TypedStorage<8, 24, std::vector<rendergraph::Pass*>>                 mLinkedPasses;
        // NOLINTEND

    public:
        // prevent constructor by default
        PassStorage& operator=(PassStorage const&);
        PassStorage(PassStorage const&);
        PassStorage();
    };

    struct ResourceStorage {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<rendergraph::Resource>>>     mResources;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, rendergraph::Resource*>> mNamedResources;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceStorage& operator=(ResourceStorage const&);
        ResourceStorage(ResourceStorage const&);
    };

    struct PassRegistry {
    public:
        // PassRegistry inner types declare
        // clang-format off
        struct FrameBufferTextureBinding;
        struct PassAttributes;
        // clang-format on

        // PassRegistry inner types define
        enum class FrameBufferRequirement : int {
            UNSPECIFIED = 0,
            FORBIDDEN   = 1,
            REQUIRED    = 2,
        };

        struct FrameBufferTextureBinding {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 4, int>   mResourceEventIndex;
            ::ll::TypedStorage<1, 1, uchar> mMipLevel;
            ::ll::TypedStorage<1, 1, uchar> mArrayIndex;
            // NOLINTEND
        };

        struct PassAttributes {
        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<8, 24, std::string> mName;
            ::ll::TypedStorage<8, 24, std::vector<int>> mResourceEventIndices;
            ::ll::UntypedStorage<1, 1> mClearTarget;
            ::ll::TypedStorage<4, 16, ::mce::Color> mClearColor;
            ::ll::TypedStorage<8, 24, ::mce::FrameBufferDescription> mFrameBufferDescription;
            ::ll::TypedStorage<4, 4, ::rendergraph::RenderOrder::PassRegistry::FrameBufferRequirement> mFrameBufferRequirement;
            ::ll::TypedStorage<8, 24, std::map<rendergraph::Resource*, rendergraph::RenderOrder::PassRegistry::FrameBufferTextureBinding>> mFrameBufferTextureBindings;
            ::ll::TypedStorage<8, 24, std::multimap<mce::TextureDescription, rendergraph::Resource*>> mReferencedTransientTextures;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<const rendergraph::Pass*, rendergraph::RenderOrder::PassRegistry::PassAttributes>> mPassAttributes;
        // clang-format on
        // NOLINTEND

    public:
        // prevent constructor by default
        PassRegistry& operator=(PassRegistry const&);
        PassRegistry(PassRegistry const&);
    };

    struct ResourceEventRegistry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<rendergraph::ResourceEvent>>                         mResourceEventList;
        ::ll::TypedStorage<8, 40, std::unordered_map<rendergraph::Resource*, std::pair<int, int>>> mResourceLifetimes;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResourceEventRegistry& operator=(ResourceEventRegistry const&);
        ResourceEventRegistry(ResourceEventRegistry const&);
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::rendergraph::RenderOrder&>                        mOwner;
    ::ll::TypedStorage<8, 48, ::rendergraph::RenderOrder::PassStorage>           mPassStorage;
    ::ll::TypedStorage<8, 64, ::rendergraph::RenderOrder::ResourceStorage>       mResourceStorage;
    ::ll::TypedStorage<8, 40, ::rendergraph::RenderOrder::PassRegistry>          mPassRegistry;
    ::ll::TypedStorage<8, 64, ::rendergraph::RenderOrder::ResourceEventRegistry> mResourceEventRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderOrder& operator=(RenderOrder const&);
    RenderOrder(RenderOrder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int attributeBindingToResource(int, ::rendergraph::Pass&, ::rendergraph::ResourceBinding const&);

    MCNAPI void execute(::rendergraph::APIResourcePool const&, ::rendergraph::RenderContext&);

    MCNAPI ::rendergraph::ValidationResult link(::rendergraph::APIResourcePool&, ::rendergraph::RenderContext&);

    MCNAPI ~RenderOrder();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rendergraph
