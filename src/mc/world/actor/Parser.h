#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/molang/MolangVersion.h"
#include "mc/util/WeightedChoices.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
#if defined(LL_PLAT_A) // @header-generator platform
class ActorFilterGroup;
#else // @header-generator platform
#endif // @header-generator platform
class BlockDescriptor;
class DefinitionTrigger;
#if defined(LL_PLAT_A) // @header-generator platform
class FilterGroup;
class GameVersion;
#else // @header-generator platform
#endif // @header-generator platform
class HashedString;
#if defined(LL_PLAT_A) // @header-generator platform
class Item;
#else // @header-generator platform
#endif // @header-generator platform
class ItemDescriptor;
#if defined(LL_PLAT_A) // @header-generator platform
class ItemInstance;
class ItemStack;
#else // @header-generator platform
#endif // @header-generator platform
class MobEffectInstance;
#if defined(LL_PLAT_A) // @header-generator platform
class Vec2;
#else // @header-generator platform
#endif // @header-generator platform
class Vec3;
struct ActorDefinitionIdentifier;
struct EffectDuration;
#if defined(LL_PLAT_A) // @header-generator platform
struct EquipmentTableDropChance;
#else // @header-generator platform
#endif // @header-generator platform
struct FloatRange;
#if defined(LL_PLAT_A) // @header-generator platform
struct IntRange;
struct ItemDefinition;
#else // @header-generator platform
#endif // @header-generator platform
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Util { struct HashStringHashGreater; }
#else // @header-generator platform
#endif // @header-generator platform
namespace mce { class Color; }
// clang-format on

class Parser {
public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, std::vector<ActorDefinitionTrigger>&);
#else // @header-generator platform
    MCAPI static bool parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::DefinitionTrigger&, bool);
#else // @header-generator platform
    MCAPI static bool parse(::Json::Value const& val, ::ActorDefinitionTrigger& definitionTrigger, bool acceptString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::ActorDefinitionTrigger&, char const*);
#else // @header-generator platform
    MCAPI static bool parse(::Json::Value const& val, ::DefinitionTrigger& definitionTrigger, bool acceptString);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, std::vector<ActorDefinitionTrigger>&, char const*);
#else // @header-generator platform
    MCAPI static bool
    parse(::Json::Value const& val, ::MolangVersion molangVersion, ::std::vector<::ItemDescriptor>& itemDescriptors);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::ActorDefinitionTrigger&, bool);
#else // @header-generator platform
    MCAPI static bool
    parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::MolangVersion, ::ItemDescriptor&);
#else // @header-generator platform
    MCAPI static bool parse(
        ::Json::Value const&                  val,
        ::SharedTypes::Legacy::FilterSubject& target,
        char const*                           jsonName,
        char const*                           defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::MolangVersion, std::vector<ItemDescriptor>&);
#else // @header-generator platform
    MCAPI static bool
    parse(::Json::Value const& val, ::EffectDuration& variable, char const* jsonName, bool convertToTicks);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::SharedTypes::Legacy::FilterSubject&, char const*, char const*);
#else // @header-generator platform
    MCAPI static void parse(::Json::Value const& val, uchar& face, uchar defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool parse(::Json::Value const&, ::EffectDuration&, char const*, bool);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::WeightedChoices<::ActorDefinitionTrigger>& variable, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::MobEffectInstance&, char const*);
#else // @header-generator platform
    MCAPI static void parse(::Json::Value const& val, ::MobEffectInstance& variable, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::FloatRange&, char const*);
#else // @header-generator platform
    MCAPI static void parse(
        ::Json::Value const&         val,
        ::ActorDefinitionIdentifier& variable,
        char const*                  jsonName,
        char const*                  defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::Json::Value&, char const*);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::std::string& variable, char const* jsonName, char const* defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::MolangVersion, ::BlockDescriptor&);
#else // @header-generator platform
    MCAPI static void parse(
        ::Json::Value const&                        val,
        ::std::vector<::ActorDefinitionIdentifier>& variable,
        char const*                                 jsonName,
        char const*                                 defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::MolangVersion, std::vector<BlockDescriptor>&);
#else // @header-generator platform
    MCAPI static void parse(
        ::Json::Value const&                                   val,
        ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>& variable,
        char const*                                            jsonName,
        char const*                                            defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, std::vector<std::string>&, char const*);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static void
    parse(::Json::Value const& val, ::mce::Color& variable, char const* jsonName, ::mce::Color const& defaultValue);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::WeightedChoices<ActorDefinitionTrigger>&, char const*);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::HashedString& variable, char const* jsonName, char const* defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, uchar&, uchar const);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::Vec3& variable, char const* jsonName, ::Vec3 const& defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, int&, char const*, int);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::ActorType& variable, char const* jsonName, char const* defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, uint&, char const*, uint);
#else // @header-generator platform
    MCAPI static void parse(
        ::Json::Value const&               val,
        ::SharedTypes::Legacy::Difficulty& variable,
        char const*                        jsonName,
        char const*                        defaultValue
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, float&, char const*, float);
#else // @header-generator platform
    MCAPI static void
    parse(::Json::Value const& val, ::ParticleType& variable, char const* jsonName, char const* defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::Vec3&, char const*, ::Vec3 const&);
#else // @header-generator platform
    MCAPI static void parse(::Json::Value const& val, bool& variable, char const* jsonName, bool defaultValue);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, bool&, char const*, bool);
#else // @header-generator platform
    MCAPI static void serialize(::FloatRange const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::mce::Color&, char const*, ::mce::Color const&);
#else // @header-generator platform
    MCAPI static void
    serialize(::std::vector<::ActorDefinitionTrigger> const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::ParticleType&, char const*, char const*);
#else // @header-generator platform
    MCAPI static void
    serialize(::std::vector<::BlockDescriptor> const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::SharedTypes::Legacy::Difficulty&, char const*, char const*);
#else // @header-generator platform
    MCAPI static void
    serialize(::std::vector<::MobEffectInstance> const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, std::string&, char const*, char const*);
#else // @header-generator platform
    MCAPI static void serialize(::ActorType const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void parse(::Json::Value const&, ::HashedString&, char const*, char const*);
#else // @header-generator platform
    MCAPI static void
    serialize(::SharedTypes::Legacy::FilterSubject const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    MCAPI static void serialize(::ParticleType const& variable, ::Json::Value& val, char const* jsonName);
#endif // @header-generator platform
    // NOLINTEND
};
