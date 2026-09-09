#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/culling/BlockCullingData.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
namespace PuvLoadData { struct LoadResultWithTiming; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockCullingGroup : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::map<HashedString, BlockCullingData>> mBlockCullingDataMap;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                     mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockCullingGroup& operator=(BlockCullingGroup const&);
    BlockCullingGroup(BlockCullingGroup const&);
    BlockCullingGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockCullingGroup();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockCullingGroup(::IMinecraftEventing&);

    MCNAPI void loadBlockCullingDataAsync(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        ::cereal::ReflectionCtx const&
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::optional<BlockCullingData>
    parseBlockCullingData(std::string_view, std::string const&, ::MolangVersion, bool, ::cereal::ReflectionCtx const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
