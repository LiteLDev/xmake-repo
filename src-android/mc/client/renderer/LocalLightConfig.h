#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    };

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
};
