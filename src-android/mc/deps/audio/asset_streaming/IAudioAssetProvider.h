#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
namespace Audio { class IStreamableAudioAsset; }
namespace Core { class PathView; }
// clang-format on

namespace Audio {

class IAudioAssetProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~IAudioAssetProvider() = default;

    virtual std::unique_ptr<Audio::IStreamableAudioAsset> openStreamableAudioAsset(::ResourceLocation const&, ::gsl::span<const std::string>, std::optional<Core::PathView>) const = 0;
    // clang-format on
    // NOLINTEND
};

} // namespace Audio
