#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/audio/asset_streaming/IAudioAssetProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

class ResourcePackAudioAssetProvider : public ::Audio::IAudioAssetProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mResourcePackManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackAudioAssetProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ResourcePackAudioAssetProvider();

    virtual std::unique_ptr<Audio::IStreamableAudioAsset> openStreamableAudioAsset(::ResourceLocation const&, ::gsl::span<const std::string>, std::optional<Core::PathView>) const;
    // clang-format on
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Audio::IStreamableAudioAsset> $openStreamableAudioAsset(
        ::ResourceLocation const&,
        ::gsl::span<const std::string>,
        std::optional<Core::PathView>
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/audio/asset_streaming/IAudioAssetProvider.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
class ResourcePackManager;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

class ResourcePackAudioAssetProvider : public ::Audio::IAudioAssetProvider {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourcePackManager const>> mResourcePackManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::Audio::IStreamableAudioAsset> openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::Audio::IStreamableAudioAsset> $openStreamableAudioAsset(
        ::ResourceLocation const&         resourceLocation,
        ::gsl::span<::std::string const>  extensions,
        ::std::optional<::Core::PathView> tempDirectory
    ) const;
    // NOLINTEND
};
#else // @header-generator platform
class ResourcePackAudioAssetProvider {};
#endif // @header-generator platform
#endif // @header-generator platform
