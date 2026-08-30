#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/sound/EventToSoundListMap.h"
#include "mc/client/sound/Sound.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class LinkedAssetValidator;
class Random;
class ResourcePackManager;
struct SoundVariant;
namespace Json { class Value; }
namespace SoundUtils { struct EventSound; }
// clang-format on

class SoundMapping {
public:
    // SoundMapping inner types declare
    // clang-format off
    struct SoundVariantCompare;
    struct EntitySounds;
    struct BlockSounds;
    struct EntitySoundList;
    struct ActorInteractiveSounds;
    // clang-format on

    // SoundMapping inner types define
    struct SoundVariantCompare {};

    struct EntitySounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::Legacy::LevelSoundEvent, Sound>> mBaseSounds;
        ::ll::UntypedStorage<8, 48>                                                                mVariantSounds;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>                                                mVariantKey;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntitySounds& operator=(EntitySounds const&);
        EntitySounds(EntitySounds const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::SoundMapping::EntitySounds& operator=(::SoundMapping::EntitySounds&&);

        MCNAPI ~EntitySounds();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct BlockSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::Legacy::LevelSoundEvent, Sound>> mSounds;
        ::ll::TypedStorage<8, 24, std::string>                                                     mBaseBlock;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockSounds& operator=(BlockSounds const&);
        BlockSounds(BlockSounds const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BlockSounds();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct EntitySoundList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 56, ::EventToSoundListMap> mBaseSounds;
        ::ll::UntypedStorage<8, 48>                      mVariantSounds;
        ::ll::TypedStorage<8, 16, ::ExpressionNode>      mVariantKey;
        // NOLINTEND

    public:
        // prevent constructor by default
        EntitySoundList& operator=(EntitySoundList const&);
        EntitySoundList(EntitySoundList const&);

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~EntitySoundList();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ActorInteractiveSounds {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SoundMapping::BlockSounds>>     mDefaultBlockSounds;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SoundMapping::EntitySoundList>> mEntitySoundLists;
        // NOLINTEND
    };

    using EventSoundMap = std::unordered_map<SharedTypes::Legacy::LevelSoundEvent, Sound>;

    using NamedSoundMap = std::unordered_map<HashedString, Sound>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<SharedTypes::Legacy::LevelSoundEvent, Sound>> mEventSounds;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, Sound>>                         mNamedSounds;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SoundMapping::EntitySounds>>     mEntitySounds;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, SoundMapping::BlockSounds>>      mBlockSounds;
    ::ll::TypedStorage<8, 80, ::SoundMapping::ActorInteractiveSounds>                          mEntityInteractiveSounds;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SoundMapping();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Sound const& _getBlockSound(
        std::unordered_map<std::string, SoundMapping::BlockSounds> const&,
        ::SharedTypes::Legacy::LevelSoundEvent,
        std::string const&
    ) const;

    MCNAPI void _loadSounds(::Json::Value const&, ::Bedrock::NonOwnerPointer<LinkedAssetValidator>);

    MCNAPI ::Sound const& getBlockSound(::SharedTypes::Legacy::LevelSoundEvent, std::string const&) const;

    MCNAPI ::Sound const& getEntitySound(::SharedTypes::Legacy::LevelSoundEvent, ::ActorSoundIdentifier const&) const;

    MCNAPI ::Sound const& getEventSound(::SharedTypes::Legacy::LevelSoundEvent) const;

    MCNAPI ::Sound const& getNamedSound(::HashedString const&) const;

    MCNAPI ::Sound getSound(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::ActorSoundIdentifier const&,
        std::string const&,
        ::Random&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _loadBlockSounds(::Json::Value const&, std::unordered_map<std::string, SoundMapping::BlockSounds>&);

    MCNAPI static void
    _loadEventSounds(::Json::Value const&, std::unordered_map<SharedTypes::Legacy::LevelSoundEvent, Sound>&, bool);
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
