#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class Vec3;
struct PlaySoundOptions;
struct SoundEventIdentifier;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ILevelSoundManagerConnector : public ::Bedrock::EnableNonOwnerReferences {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // ILevelSoundManagerConnector inner types define
    using OnLevelSoundEvent = ::Bedrock::PubSub::Publisher<
        void(const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~ILevelSoundManagerConnector() = default;
#else // @header-generator platform
    virtual ~ILevelSoundManagerConnector() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>& getOnLevelSoundEventConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<
        void(::SoundEventIdentifier const&, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    getOnLevelSoundEventConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const PlaySoundOptions&)>& getOnLevelSoundEventWithVolumeAndPitchConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::PlaySoundOptions const&)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void (const std::string&)>& getOnStopLevelSoundEventConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopAllLevelSoundsEventConnector() = 0;
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopMusicEventConnector() = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() = 0;
#endif // @header-generator platform
    // NOLINTEND
};
