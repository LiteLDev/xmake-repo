#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LinkedAssetValidator;
class ResourcePackManager;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class RenderingResourcePackJsonConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::HashedString>       mDefaultIdentifier;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderingResourcePackJsonConfig& operator=(RenderingResourcePackJsonConfig const&);
    RenderingResourcePackJsonConfig(RenderingResourcePackJsonConfig const&);
    RenderingResourcePackJsonConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~RenderingResourcePackJsonConfig();

    virtual ::Puv::LoadResultAny loadFromString(::cereal::ReflectionCtx const&, std::string const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>) = 0;

    virtual void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>) = 0;

    virtual void _setDefaultIdentifierImpl(::HashedString const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RenderingResourcePackJsonConfig(::IMinecraftEventing&);

    MCNAPI ::HashedString const& getDefaultIdentifer() const;

    MCNAPI void setDefaultIdentifier(::HashedString const&);
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
