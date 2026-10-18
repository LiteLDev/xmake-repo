#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/PBRFallbackSettings.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PBRFallbackConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourcePackManager;
class SemVersionConstant;
struct PBRFallbackSettings;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class PBRFallbackConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class PBRFallbackConfig {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // PBRFallbackConfig inner types declare
    // clang-format off
    struct PBRFallbackConfigSettings;
    // clang-format on

    // PBRFallbackConfig inner types define
#if defined(LL_PLAT_A) // @header-generator platform
    struct PBRFallbackConfigSettings {
    public:
        // PBRFallbackConfigSettings inner types define
        using PBRFallbackSettings = ::PBRFallbackSettings;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>           mFormatVersion;
        ::ll::TypedStorage<4, 64, ::PBRFallbackSettings> mPBR;
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::PBRFallbackConfig::PBRFallbackConfigSettings> mPBRFallbackSettings;
    ::ll::UntypedStorage<8, 24>                                               mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfig& operator=(PBRFallbackConfig const&);
    PBRFallbackConfig(PBRFallbackConfig const&);
    PBRFallbackConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PBRFallbackConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindPBRFallbackParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PAYLOAD_KEY();

    MCNAPI static std::string_view const& PBR_FALLBACK_GLOBAL_CONFIG_FILE();
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct PBRFallbackConfigSettings {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkf77385;
        ::ll::UntypedStorage<4, 64> mUnke83bd2;
        // NOLINTEND

    public:
        // prevent constructor by default
        PBRFallbackConfigSettings& operator=(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings(PBRFallbackConfigSettings const&);
        PBRFallbackConfigSettings();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnkab4791;
    ::ll::UntypedStorage<8, 24> mUnk332196;
    ::ll::UntypedStorage<8, 8>  mUnk3b226f;
    // NOLINTEND

public:
    // prevent constructor by default
    PBRFallbackConfig& operator=(PBRFallbackConfig const&);
    PBRFallbackConfig(PBRFallbackConfig const&);
    PBRFallbackConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PBRFallbackConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PBRFallbackConfig(::IMinecraftEventing& eventing);

    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindPBRFallbackParameters(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY();

    MCNAPI static ::std::string_view const& PBR_FALLBACK_GLOBAL_CONFIG_FILE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftEventing& eventing);
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
#else // @header-generator platform
    struct PBRFallbackConfigSettings {};
#endif // @header-generator platform
#endif // @header-generator platform
};
