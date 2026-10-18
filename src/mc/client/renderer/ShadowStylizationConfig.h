#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
class ResourcePackManager;
class SemVersion;
namespace Editor::Services { class ClientDataTransferServiceProvider; }
namespace Puv { class LoadResultAny; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class ShadowStylizationConfig : public ::Bedrock::EnableNonOwnerReferences {
#else // @header-generator platform
class ShadowStylizationConfig {
#endif // @header-generator platform
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
            enum class ShadowStyle : int {
                SoftShadows  = 0,
                TexelShadows = 1,
            };

        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 4> mUnk1534d7;
            ::ll::UntypedStorage<4, 4> mUnkbdbba3;
            // NOLINTEND

        public:
            // prevent constructor by default
            ShadowStylizationSettings& operator=(ShadowStylizationSettings const&);
            ShadowStylizationSettings(ShadowStylizationSettings const&);
            ShadowStylizationSettings();
#else // @header-generator platform
            enum class ShadowStyle : int {};
#endif // @header-generator platform
#endif // @header-generator platform
        };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk8a7d6a;
        ::ll::UntypedStorage<4, 8>  mUnk27dc97;
        // NOLINTEND

    public:
        // prevent constructor by default
        ShadowStylizationConfigSettings& operator=(ShadowStylizationConfigSettings const&);
        ShadowStylizationConfigSettings(ShadowStylizationConfigSettings const&);
        ShadowStylizationConfigSettings();

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::SemVersion const& VERSION();
        // NOLINTEND
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform
    };
#if defined(LL_PLAT_A) // @header-generator platform

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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk8ed45b;
    ::ll::UntypedStorage<8, 24> mUnk6298c2;
    ::ll::UntypedStorage<8, 8>  mUnkfb8df3;
    // NOLINTEND

public:
    // prevent constructor by default
    ShadowStylizationConfig& operator=(ShadowStylizationConfig const&);
    ShadowStylizationConfig(ShadowStylizationConfig const&);
    ShadowStylizationConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ShadowStylizationConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void loadDataSync(::cereal::ReflectionCtx const& ctx, ::ResourcePackManager& resourcePackManager);

    MCNAPI ::Puv::LoadResultAny
    loadFromString(::cereal::ReflectionCtx const& ctx, ::std::string const& shadowStylizationJson);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindShadowStylizationParameters(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Scripting::Result_deprecated<void> registerEditorAccessors(
        ::Editor::Services::ClientDataTransferServiceProvider& dataTransferService,
        ::LocalPlayer&                                         localPlayer,
        ::cereal::ReflectionCtx const&                         ctx
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& PAYLOAD_KEY();

    MCNAPI static ::std::string_view const& SHADOW_STYLIZATION_GLOBAL_CONFIG_FILE();
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
