#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/WeightedChoices.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class ActorFilterGroup;
class BlockDescriptor;
class DefinitionTrigger;
class FilterGroup;
class GameVersion;
class HashedString;
class Item;
class ItemDescriptor;
class ItemInstance;
class ItemStack;
class MobEffectInstance;
class Vec2;
class Vec3;
struct ActorDefinitionIdentifier;
struct EffectDuration;
struct EquipmentTableDropChance;
struct FloatRange;
struct IntRange;
struct ItemDefinition;
namespace Json { class Value; }
namespace Util { struct HashStringHashGreater; }
namespace mce { class Color; }
// clang-format on

class Parser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool parse(::Json::Value const&, std::vector<ActorDefinitionTrigger>&);

    MCNAPI static bool parse(::Json::Value const&, ::DefinitionTrigger&, bool);

    MCNAPI static bool parse(::Json::Value const&, ::ActorDefinitionTrigger&, char const*);

    MCNAPI static bool parse(::Json::Value const&, std::vector<ActorDefinitionTrigger>&, char const*);

    MCNAPI static bool parse(::Json::Value const&, ::ActorDefinitionTrigger&, bool);

    MCNAPI static bool parse(::Json::Value const&, ::MolangVersion, ::ItemDescriptor&);

    MCNAPI static bool parse(::Json::Value const&, ::MolangVersion, std::vector<ItemDescriptor>&);

    MCNAPI static bool parse(::Json::Value const&, ::SharedTypes::Legacy::FilterSubject&, char const*, char const*);

    MCNAPI static bool parse(::Json::Value const&, ::EffectDuration&, char const*, bool);

    MCNAPI static void parse(::Json::Value const&, ::MobEffectInstance&, char const*);

    MCNAPI static void parse(::Json::Value const&, ::FloatRange&, char const*);

    MCNAPI static void parse(::Json::Value const&, ::Json::Value&, char const*);

    MCNAPI static void parse(::Json::Value const&, ::MolangVersion, ::BlockDescriptor&);

    MCNAPI static void parse(::Json::Value const&, ::MolangVersion, std::vector<BlockDescriptor>&);

    MCNAPI static void parse(::Json::Value const&, std::vector<std::string>&, char const*);

    MCNAPI static void parse(::Json::Value const&, ::WeightedChoices<ActorDefinitionTrigger>&, char const*);

    MCNAPI static void parse(::Json::Value const&, uchar&, uchar const);

    MCNAPI static void parse(::Json::Value const&, int&, char const*, int);

    MCNAPI static void parse(::Json::Value const&, uint&, char const*, uint);

    MCNAPI static void parse(::Json::Value const&, float&, char const*, float);

    MCNAPI static void parse(::Json::Value const&, ::Vec3&, char const*, ::Vec3 const&);

    MCNAPI static void parse(::Json::Value const&, bool&, char const*, bool);

    MCNAPI static void parse(::Json::Value const&, ::mce::Color&, char const*, ::mce::Color const&);

    MCNAPI static void parse(::Json::Value const&, ::ParticleType&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::SharedTypes::Legacy::Difficulty&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, std::string&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::HashedString&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::ActorDefinitionIdentifier&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::ActorType&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::MolangVersion, std::vector<BlockDescriptor>&, char const*);

    MCNAPI static void parse(::Json::Value const&, std::vector<ActorDefinitionIdentifier>&, char const*, char const*);

    MCNAPI static void
    parse(::Json::Value const&, std::vector<SharedTypes::Legacy::LevelSoundEvent>&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::FilterGroup&, char const*, char const*);

    MCNAPI static void parse(::Json::Value const&, ::IntRange&, char const*, int, int);

    MCNAPI static void serialize(::ActorDefinitionTrigger const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::EffectDuration const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::FloatRange const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::ParticleType const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::ActorDefinitionIdentifier const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::ActorType const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(std::vector<BlockDescriptor> const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(std::vector<ActorDefinitionTrigger> const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(std::vector<MobEffectInstance> const&, ::Json::Value&, char const*);

    MCNAPI static void serialize(::SharedTypes::Legacy::FilterSubject const&, ::Json::Value&, char const*);
    // NOLINTEND
};
