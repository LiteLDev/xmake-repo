#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShadowStylizationConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ShadowStylizationConfig inner types declare
    // clang-format off
    struct ShadowStylizationConfigSettings;
    // clang-format on

    // ShadowStylizationConfig inner types define
    struct ShadowStylizationConfigSettings {
    public:
        // ShadowStylizationConfigSettings inner types declare
        // clang-format off
        struct ShadowStylizationSettings;
        // clang-format on

        // ShadowStylizationConfigSettings inner types define
        struct ShadowStylizationSettings {
        public:
            // ShadowStylizationSettings inner types define
            enum ShadowStyle : uint {
                SoftShadows  = 0,
                TexelShadows = 1,
            };

        public:
            // member variables
            // NOLINTBEGIN
            // clang-format off
            ::ll::TypedStorage<4, 4, ::ShadowStylizationConfig::ShadowStylizationConfigSettings::ShadowStylizationSettings::ShadowStyle> mShadowStyle;
            ::ll::TypedStorage<4, 4, int> mQuantizedTexelSize;
            // clang-format on
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        // clang-format off
        ::ll::TypedStorage<8, 24, std::string> mFormatVersion;
        ::ll::TypedStorage<4, 8, ::ShadowStylizationConfig::ShadowStylizationConfigSettings::ShadowStylizationSettings> mShadowStylizationSettings;
        // clang-format on
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 32, ::ShadowStylizationConfig::ShadowStylizationConfigSettings> mShadowStylizationConfigSettings;
    ::ll::UntypedStorage<8, 24> mResourceLoadManager;
    ::ll::TypedStorage<8, 8, ::IMinecraftEventing&> mEventing;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowStylizationConfig& operator=(ShadowStylizationConfig const&);
    ShadowStylizationConfig(ShadowStylizationConfig const&);
    ShadowStylizationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShadowStylizationConfig();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ShadowStylizationConfig(::IMinecraftEventing&);

    MCNAPI void loadDataSync(::cereal::ReflectionCtx const&, ::ResourcePackManager&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindShadowStylizationParameters(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::string_view const& PAYLOAD_KEY();

    MCNAPI static std::string_view const& SHADOW_STYLIZATION_GLOBAL_CONFIG_FILE();
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
