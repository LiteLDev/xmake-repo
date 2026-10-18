#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/client/renderer/RuntimeLocalLightingConfig.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/shared_types/Color255RGB.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
class RuntimeLocalLightingConfig;
class SemVersionConstant;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LocalLightConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class LocalPlayer;
class ResourcePackManager;
class SemVersionConstant;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LocalLightConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class LocalLightConfig {
#endif // @header-generator platform
#endif // @header-generator platform
public:
    // LocalLightConfig inner types declare
    // clang-format off
    struct LocalLightConfigSettingsV0;
    // clang-format on

    // LocalLightConfig inner types define
    struct LocalLightConfigSettingsV0 {
    public:
        // LocalLightConfigSettingsV0 inner types declare
        // clang-format off
        struct BlockLightingData;
        // clang-format on

        // LocalLightConfigSettingsV0 inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        struct BlockLightingData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::TypedStorage<4, 20, std::optional<SharedTypes::Color255RGB>> mColor;
            ::ll::UntypedStorage<1, 1>                                         mType;
            // NOLINTEND
        };

        using BlockDataCollection =
            std::unordered_map<std::string, LocalLightConfig::LocalLightConfigSettingsV0::BlockLightingData>;

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, LocalLightConfig::LocalLightConfigSettingsV0::BlockLightingData>> mCollection;
        ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
        // clang-format on
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LocalLightConfigSettingsV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
        struct BlockLightingData {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 20> mUnka5b223;
            ::ll::UntypedStorage<1, 1>  mUnkfcc3fe;
            // NOLINTEND

        public:
            // prevent constructor by default
            BlockLightingData& operator=(BlockLightingData const&);
            BlockLightingData(BlockLightingData const&);
            BlockLightingData();
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk6847c8;
        ::ll::UntypedStorage<8, 32> mUnk5eae5a;
        // NOLINTEND

    public:
        // prevent constructor by default
        LocalLightConfigSettingsV0& operator=(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0(LocalLightConfigSettingsV0 const&);
        LocalLightConfigSettingsV0();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~LocalLightConfigSettingsV0();
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersionConstant const& VERSION();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
#else // @header-generator platform
        struct BlockLightingData {};
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using LocalLightConfigSettingsV0 = ::LocalLightConfig::LocalLightConfigSettingsV0;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::LocalLightConfig::LocalLightConfigSettingsV0> mLocalLightConfigSettings;
    ::ll::TypedStorage<8, 16, std::shared_ptr<RuntimeLocalLightingConfig>>    mRuntimeConfig;
    ::ll::UntypedStorage<8, 24>                                               mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&>                           mEventing;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLightConfig& operator=(LocalLightConfig const&);
    LocalLightConfig(LocalLightConfig const&);
    LocalLightConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalLightConfig();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalizeResources();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLocalLightParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PAYLOAD_KEY_V0();
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk8c9140;
    ::ll::UntypedStorage<8, 16> mUnkba8e14;
    ::ll::UntypedStorage<8, 24> mUnk2e35a0;
    ::ll::UntypedStorage<8, 8>  mUnkf945c4;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalLightConfig& operator=(LocalLightConfig const&);
    LocalLightConfig(LocalLightConfig const&);
    LocalLightConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalLightConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit LocalLightConfig(::IMinecraftEventing& eventing);

    MCNAPI void finalizeResources();

    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);

    MCNAPI ::Puv::LoadResultAny
    loadFromString(::cereal::ReflectionCtx const& ctx, ::std::string const& pointLightsJson);

    MCNAPI void setConfig(::LocalLightConfig::LocalLightConfigSettingsV0 const& other);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindLocalLightParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& LOCAL_LIGHTS_GLOBAL_CONFIG_FILE();

    MCNAPI static ::std::string_view const& PAYLOAD_KEY_V0();
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
#endif // @header-generator platform
#endif // @header-generator platform
};
