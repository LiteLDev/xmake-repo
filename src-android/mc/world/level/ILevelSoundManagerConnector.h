#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"

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
    // ILevelSoundManagerConnector inner types define
    using OnLevelSoundEvent = ::Bedrock::PubSub::Publisher<
        void(const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool),
        Bedrock::PubSub::ThreadModel::MultiThreaded,
        (Bedrock::PubSub::ReturnPolicyType)0>;

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~ILevelSoundManagerConnector() = default;

    virtual ::Bedrock::PubSub::Connector<void (const SoundEventIdentifier&, const Vec3&, int, const ActorSoundIdentifier&, bool)>& getOnLevelSoundEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void (const PlaySoundOptions&)>& getOnLevelSoundEventWithVolumeAndPitchConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void (const std::string&)>& getOnStopLevelSoundEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopAllLevelSoundsEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void ()>& getOnStopMusicEventConnector() = 0;
    // clang-format on
    // NOLINTEND
};
