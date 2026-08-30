#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/renderer/RenderMaterialGroupBase.h"
#include "mc/deps/core/resource/PackIdVersion.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/renderer/SamplerGroupCache.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
class ResourcePackManager;
namespace mce { class MaterialPtr; }
namespace mce { class RenderMaterialInfo; }
// clang-format on

namespace mce {

class RenderMaterialGroup : public ::AppPlatformListener, public ::mce::RenderMaterialGroupBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::shared_ptr<mce::RenderMaterialInfo>>> mMaterials;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::vector<PackIdVersion>>> mLoadedMaterialFiles;
    ::ll::TypedStorage<8, 48, ::ResourceLocation>                                mBoundList;
    ::ll::TypedStorage<4, 40, std::mutex>                                        mAsyncLoadLock;
    ::ll::TypedStorage<1, 1, std::atomic<bool>>                                  mRestartAsyncLoad;
    ::ll::TypedStorage<8, 40, ::mce::SamplerGroupCache>                          mSamplerGroupCache;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                             mResourcePackManager;
    ::ll::UntypedStorage<8, 24>                                                  mResourceLoadManager;
    ::ll::UntypedStorage<8, 24>                                                  mShaderGroup;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderMaterialGroup();

    virtual void onAppResumed();

    virtual ::mce::RenderMaterialInfo& getMaterialInfo(::HashedString const&);

    virtual void clearMaterial(::HashedString const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _loadList(::Bedrock::NonOwnerPointer<mce::ShaderGroup>, ::ResourcePackManager&);

    MCNAPI ::mce::MaterialPtr getMaterial(::HashedString const&);

    MCNAPI std::unordered_map<HashedString, std::shared_ptr<mce::RenderMaterialInfo>> const& getMaterialMap() const;

    MCNAPI bool loadList(
        ::Bedrock::NonOwnerPointer<mce::ShaderGroup>,
        ::ResourceLocation const&,
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        bool
    );

    MCNAPI void reset();

    MCNAPI void setShaderGroup(::Bedrock::NonOwnerPointer<mce::ShaderGroup> const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void resetAll();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::RenderMaterialGroup& common();

    MCNAPI static ::mce::RenderMaterialGroup& switchable();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppResumed();

    MCNAPI ::mce::RenderMaterialInfo& $getMaterialInfo(::HashedString const&);

    MCNAPI void $clearMaterial(::HashedString const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
