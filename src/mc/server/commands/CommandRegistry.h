#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
#include "mc/network/packet/AvailableCommandsPacket.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandMessage.h"
#include "mc/server/commands/CommandOperator.h"
#include "mc/server/commands/CommandRawText.h"
#include "mc/server/commands/CommandWildcardInt.h"
#include "mc/server/commands/WildcardCommandSelector.h"
#endif // @header-generator platform

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/NonOwnerPointer.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/deps/core/utility/typeid_t.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/platform/UUID.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/brstd/copyable_function.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/BlockStateCommandParam.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandLexer.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandOrigin.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandStatus.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandTypeFlag.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/SemanticConstraint.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/actor/player/PlayerListEntry.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AvailableCommandsPacket;
class BlockType;
class Command;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class CommandOrigin;
#endif // @header-generator platform
class CommandParameterData;
class CommandRunStats;
class CommandSelectorBase;
class IMinecraftEventing;
class Packet;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class PlayerListEntry;
#endif // @header-generator platform
struct ActorSelectorArgs;
struct AutoCompleteInformation;
#if defined(LL_PLAT_A) // @header-generator platform
struct CommandFlag;
#else // @header-generator platform
#endif // @header-generator platform
struct CommandRegistryArguments;
struct CommandSyntaxInformation;
namespace Json { class Value; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace flighting { class IFlightReader; }
#else // @header-generator platform
namespace mce { class UUID; }
#endif // @header-generator platform
// clang-format on

class CommandRegistry {
public:
    // CommandRegistry inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct RegistryState;
    struct SoftEnum;
#endif // @header-generator platform
    class Symbol;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct ConstrainedValue;
    struct Factorization;
    struct LexicalToken;
    struct OptionalParameterChain;
    struct Overload;
    struct ParamSymbols;
    struct ParseToken;
    struct ChainedSubcommand;
    struct Enum;
    struct ParamParseRule;
    struct ParseRule;
    struct SemanticInfo;
    struct Signature;
#endif // @header-generator platform
    struct SymbolHasher;
    struct SymbolPairHasher;
    struct ParseTable;
#if defined(LL_PLAT_A) // @header-generator platform
    struct Overload;
    struct ConstrainedValue;
    struct SoftEnum;
    struct RegistryState;
    struct ParamSymbols;
    struct SemanticInfo;
    struct ParseRule;
    struct ParseToken;
    struct OptionalParameterChain;
    struct Enum;
    struct ChainedSubcommand;
    struct Factorization;
    struct Signature;
    struct ParamParseRule;
    struct LexicalToken;
#else // @header-generator platform
#endif // @header-generator platform
    class Parser;
    // clang-format on

    // CommandRegistry inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    using ParseFunction = bool (::CommandRegistry::*)(
        void*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        ::std::string&,
        ::std::vector<::std::string>&
    ) const;

#endif // @header-generator platform
    enum class HardNonTerminal : int {
        Epsilon                   = 1048576,
        Int                       = 1048577,
        Float                     = 1048578,
        Val                       = 1048579,
        RVal                      = 1048580,
        WildcardInt               = 1048581,
        Operator                  = 1048582,
        CompareOperator           = 1048583,
        Selection                 = 1048584,
        StandaloneSelection       = 1048585,
        WildcardSelection         = 1048586,
        NonIdSelector             = 1048587,
        ScoresArg                 = 1048588,
        ScoresArgs                = 1048589,
        ScoreSelectParam          = 1048590,
        ScoreSelector             = 1048591,
        TagSelector               = 1048592,
        FilePath                  = 1048593,
        FilePathVal               = 1048594,
        FilePathCont              = 1048595,
        IntegerRangeVal           = 1048596,
        IntegerRangePostVal       = 1048597,
        IntegerRange              = 1048598,
        FullIntegerRange          = 1048599,
        RationalRangeVal          = 1048600,
        RationalRangePostVal      = 1048601,
        RationalRange             = 1048602,
        FullRationalRange         = 1048603,
        SelArgs                   = 1048604,
        Args                      = 1048605,
        Arg                       = 1048606,
        MArg                      = 1048607,
        MValue                    = 1048608,
        NameArg                   = 1048609,
        TypeArg                   = 1048610,
        FamilyArg                 = 1048611,
        HasPermissionArg          = 1048612,
        HasPermissionArgs         = 1048613,
        HasPermissionSelector     = 1048614,
        HasPermissionElement      = 1048615,
        HasPermissionElements     = 1048616,
        TagArg                    = 1048617,
        HasItemElement            = 1048618,
        HasItemElements           = 1048619,
        HasItemArg                = 1048620,
        HasItemArgs               = 1048621,
        HasItemSelector           = 1048622,
        EquipmentSlotEnum         = 1048623,
        PropertyValue             = 1048624,
        HasPropertyParamValue     = 1048625,
        HasPropertyParamEnumValue = 1048626,
        HasPropertyArg            = 1048627,
        HasPropertyArgs           = 1048628,
        HasPropertyElement        = 1048629,
        HasPropertyElements       = 1048630,
        HasPropertySelector       = 1048631,
        Id                        = 1048632,
        IdCont                    = 1048633,
        CoordXInt                 = 1048634,
        CoordYInt                 = 1048635,
        CoordZInt                 = 1048636,
        CoordXFloat               = 1048637,
        CoordYFloat               = 1048638,
        CoordZFloat               = 1048639,
        Position                  = 1048640,
        PositionFloat             = 1048641,
        MessageExp                = 1048642,
        Message                   = 1048643,
        MessageRoot               = 1048644,
        PostSelector              = 1048645,
        RawText                   = 1048646,
        RawTextCont               = 1048647,
        JsonValue                 = 1048648,
        JsonField                 = 1048649,
        JsonObject                = 1048650,
        JsonObjectFields          = 1048651,
        JsonObjectCont            = 1048652,
        JsonArray                 = 1048653,
        JsonArrayValues           = 1048654,
        JsonArrayCont             = 1048655,
        BlockState                = 1048656,
        BlockStateKey             = 1048657,
        BlockStateValue           = 1048658,
        BlockStateValues          = 1048659,
        BlockStateArray           = 1048660,
        BlockStateArrayCont       = 1048661,
        ClockTimeMarkerName       = 1048662,
        Command                   = 1048663,
        SlashCommand              = 1048664,
        CodeBuilderArg            = 1048665,
        CodeBuilderArgs           = 1048666,
        CodeBuilderSelectParam    = 1048667,
        CodeBuilderSelector       = 1048668,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    class Symbol {
#else // @header-generator platform
    struct RegistryState {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, int> mValue;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, uint>                 signatureCount;
        ::ll::TypedStorage<4, 4, uint>                 enumValueCount;
        ::ll::TypedStorage<4, 4, uint>                 postfixCount;
        ::ll::TypedStorage<4, 4, uint>                 enumCount;
        ::ll::TypedStorage<4, 4, uint>                 enumLookupCount;
        ::ll::TypedStorage<4, 4, uint>                 typeLookupCount;
        ::ll::TypedStorage<4, 4, uint>                 factorizationCount;
        ::ll::TypedStorage<4, 4, uint>                 optionalCount;
        ::ll::TypedStorage<4, 4, uint>                 ruleCount;
        ::ll::TypedStorage<4, 4, uint>                 softEnumCount;
        ::ll::TypedStorage<4, 4, uint>                 constraintCount;
        ::ll::TypedStorage<4, 4, uint>                 chainedSubcommandCount;
        ::ll::TypedStorage<4, 4, uint>                 chainedSubcommandValueCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> enumValuesCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> constrainedValueCount;
        ::ll::TypedStorage<8, 24, ::std::vector<uint>> softEnumValuesCount;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI int value() const;
#else // @header-generator platform
        MCAPI ~RegistryState();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct SymbolHasher {};

    struct SymbolPairHasher {};

    struct ParseTable {
#else // @header-generator platform
    struct SoftEnum {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        // clang-format off
        ::ll::TypedStorage<8, 24, std::map<CommandRegistry::Symbol, entt::dense_set<CommandRegistry::Symbol, CommandRegistry::SymbolHasher, std::equal_to<void>, std::allocator<CommandRegistry::Symbol>>>> first;
        ::ll::TypedStorage<8, 24, std::map<CommandRegistry::Symbol, entt::dense_set<CommandRegistry::Symbol, CommandRegistry::SymbolHasher, std::equal_to<void>, std::allocator<CommandRegistry::Symbol>>>> follow;
        ::ll::TypedStorage<8, 56, ::entt::dense_map<std::pair<CommandRegistry::Symbol, CommandRegistry::Symbol>, int, CommandRegistry::SymbolPairHasher, std::equal_to<void>, std::allocator<std::pair<const std::pair<CommandRegistry::Symbol, CommandRegistry::Symbol>, int>>>> predict;
        ::ll::TypedStorage<8, 8, std::chrono::duration<long long, std::ratio<1, 1000000000>>> buildDuration;
        // clang-format on
        // NOLINTEND
    };

    struct Overload {
    public:
        // Overload inner types define
        using AllocFunction = ::brstd::copyable_function<std::unique_ptr<Command>() const>;

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16>    version;
        ::ll::UntypedStorage<8, 64>    alloc;
        ::ll::UntypedStorage<8, 24>    params;
        ::ll::TypedStorage<4, 4, int>  versionOffset;
        ::ll::TypedStorage<1, 1, bool> isChaining;
        ::ll::UntypedStorage<8, 32>    paramsSymbol;
#else // @header-generator platform
        ::std::string                mName;
        ::std::vector<::std::string> mValues;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        Overload();
#else // @header-generator platform
        SoftEnum();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI SoftEnum(::std::string const& name, ::std::vector<::std::string> values);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string const& name, ::std::vector<::std::string> values);
        // NOLINTEND
    };

    class Symbol {
    public:
        int mValue{-1}; // this+0x0

        static int const NonTerminalBit   = 0x100000;
        static int const EnumBit          = 0x200000;
        static int const OptionalBit      = 0x400000;
        static int const FactorizationBit = 0x800000;
        static int const PostfixBit       = 0x1000000;
        static int const EnumValueBit     = 0x2000000;
        static int const SoftEnumBit      = 0x4000000;

        Symbol() = default;

        Symbol(int val) : mValue(val) {}

        // not trivially copyable
        Symbol(Symbol const& other) : mValue(other.mValue) {}

        Symbol(HardNonTerminal data) : mValue(static_cast<int>(data)) {}

        Symbol(CommandLexer::TokenType data) : mValue(static_cast<int>(data)) {}

        Symbol& operator=(Symbol const& other) {
            mValue = other.mValue;
            return *this;
        }

        [[nodiscard]] inline bool operator==(Symbol const& other) const { return mValue == other.mValue; }

        uint64 toIndex() const { return mValue & 0xffffffffe00fffffull; }
#endif // @header-generator platform
    };

    struct ConstrainedValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mValue;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mEnum;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::vector<uchar>>       mConstraints;
#else // @header-generator platform
        ::ll::TypedStorage<8, 24, ::std::vector<uchar>>     mConstraints;
        // NOLINTEND
    };

    struct Factorization {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> commandSymbol;
        // NOLINTEND
    };

    struct LexicalToken {
    public:
        // member variables
        // NOLINTBEGIN
        char const*               mText;
        uint                      mLength;
        ::CommandRegistry::Symbol mType;
        ::CommandRegistry::Symbol mIdentifierInfo;
        ::CommandRegistry const&  mRegistry;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        ConstrainedValue& operator=(ConstrainedValue const&);
        ConstrainedValue(ConstrainedValue const&);
        ConstrainedValue();
    };

    struct SoftEnum {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>              mName;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mValues;
        // NOLINTEND

    public:
        // prevent constructor by default
        SoftEnum& operator=(SoftEnum const&);
        SoftEnum(SoftEnum const&);
        SoftEnum();
    };

    struct RegistryState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>               signatureCount;
        ::ll::TypedStorage<4, 4, uint>               enumValueCount;
        ::ll::TypedStorage<4, 4, uint>               postfixCount;
        ::ll::TypedStorage<4, 4, uint>               enumCount;
        ::ll::TypedStorage<4, 4, uint>               enumLookupCount;
        ::ll::TypedStorage<4, 4, uint>               typeLookupCount;
        ::ll::TypedStorage<4, 4, uint>               factorizationCount;
        ::ll::TypedStorage<4, 4, uint>               optionalCount;
        ::ll::TypedStorage<4, 4, uint>               ruleCount;
        ::ll::TypedStorage<4, 4, uint>               softEnumCount;
        ::ll::TypedStorage<4, 4, uint>               constraintCount;
        ::ll::TypedStorage<4, 4, uint>               chainedSubcommandCount;
        ::ll::TypedStorage<4, 4, uint>               chainedSubcommandValueCount;
        ::ll::TypedStorage<8, 24, std::vector<uint>> enumValuesCount;
        ::ll::TypedStorage<8, 24, std::vector<uint>> constrainedValueCount;
        ::ll::TypedStorage<8, 24, std::vector<uint>> softEnumValuesCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        RegistryState& operator=(RegistryState const&);
#else // @header-generator platform
        LexicalToken& operator=(LexicalToken const&);
        LexicalToken(LexicalToken const&);
        LexicalToken();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI RegistryState(::CommandRegistry::RegistryState const&);

        MCNAPI ~RegistryState();
#else // @header-generator platform
        MCAPI ::CommandRegistry::LexicalToken& operator=(::CommandLexer::Token const& token);
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };

    struct OptionalParameterChain {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                       parameterCount;
        ::ll::TypedStorage<4, 4, int>                       followingRuleIndex;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> paramSymbol;
        // NOLINTEND
    };

    struct Overload {
    public:
        // Overload inner types define
        using AllocFunction = ::brstd::copyable_function<::std::unique_ptr<::Command>() const>;
#endif // @header-generator platform

    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // constructor thunks
#else // @header-generator platform
        // member variables
#endif // @header-generator platform
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::CommandRegistry::RegistryState const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::CommandVersion                         version;
        AllocFunction                            alloc;
        ::std::vector<::CommandParameterData>    params;
        int                                      versionOffset;
        bool                                     isChaining;
        ::std::vector<::CommandRegistry::Symbol> paramsSymbol;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ParamSymbols {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> x;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> y;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> z;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dx;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dy;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> dz;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> r;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rx;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rxm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> ry;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> rym;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> l;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> lm;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> c;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> m;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> name;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> type;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> family;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> score;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> tag;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> hasitem;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> haspermission;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> hasproperty;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> codebuilder;
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct SemanticInfo {
#else // @header-generator platform
    struct ParseToken {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<1, 1, bool>                                  mIsValid;
        ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Symbol>> mConstrainedParams;
        ::ll::TypedStorage<8, 24, std::string>                          mSoftEnumText;
        ::ll::TypedStorage<8, 24, std::string>                          mSoftEnumEscapeCharExceptions;
        ::ll::TypedStorage<8, 24, std::set<CommandRegistry::Symbol>>    mAlreadyCompletedSymbols;
#else // @header-generator platform
        ::std::unique_ptr<::CommandRegistry::ParseToken> child;
        ::std::unique_ptr<::CommandRegistry::ParseToken> next;
        ::CommandRegistry::ParseToken*                   parent;
        char const*                                      text;
        uint                                             length;
        ::CommandRegistry::Symbol                        type;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ~SemanticInfo();
#else // @header-generator platform
        MCAPI ::std::string toString() const;

        MCAPI ~ParseToken();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct ParseRule {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16>                                     nonTerminal;
        ::ll::UntypedStorage<8, 48>                                     process;
        ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Symbol>> derivation;
        ::ll::TypedStorage<4, 8, ::CommandVersion>                      versions;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseRule& operator=(ParseRule const&);
        ParseRule(ParseRule const&);
        ParseRule();
    };

    struct ParseToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry::ParseToken>> child;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry::ParseToken>> next;
        ::ll::TypedStorage<8, 8, ::CommandRegistry::ParseToken*>               parent;
        ::ll::TypedStorage<8, 8, char const*>                                  text;
        ::ll::TypedStorage<4, 4, uint>                                         length;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>                    type;
        // NOLINTEND

    public:
        // prevent constructor by default
        ParseToken();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI std::string toString() const;
        // NOLINTEND
    };

    struct OptionalParameterChain {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>                       parameterCount;
        ::ll::TypedStorage<4, 4, int>                       followingRuleIndex;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> paramSymbol;
        // NOLINTEND

    public:
        // prevent constructor by default
        OptionalParameterChain& operator=(OptionalParameterChain const&);
        OptionalParameterChain();
    };

    struct Enum {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                          name;
        ::ll::UntypedStorage<2, 2>                                      type;
        ::ll::UntypedStorage<8, 16>                                     parse;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<ulong, ulong>>> values;
        // NOLINTEND

    public:
        // prevent constructor by default
        Enum& operator=(Enum const&);
        Enum(Enum const&);
        Enum();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Enum();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ChainedSubcommand {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 24, std::string>                         name;
        ::ll::UntypedStorage<2, 2>                                     type;
        ::ll::UntypedStorage<8, 16>                                    parse;
        ::ll::TypedStorage<8, 24, std::vector<std::pair<ulong, uint>>> values;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChainedSubcommand& operator=(ChainedSubcommand const&);
        ChainedSubcommand(ChainedSubcommand const&);
        ChainedSubcommand();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ChainedSubcommand();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::std::string                            name;
        ::Bedrock::typeid_t<::CommandRegistry>   type;
        ParseFunction                            parse;
        ::std::vector<::std::pair<uint64, uint>> values;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct Factorization {
#else // @header-generator platform
    struct Enum {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> commandSymbol;
        // NOLINTEND

    public:
        // prevent constructor by default
        Factorization& operator=(Factorization const&);
        Factorization(Factorization const&);
        Factorization();
    };

    struct Signature {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                            name;
        ::ll::TypedStorage<8, 24, std::string>                            description;
        ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Overload>> overloads;
        ::ll::TypedStorage<8, 24, std::vector<uint>>                      chainedSubcommandIndexes;
        ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                permissionLevel;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>               commandSymbol;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol>               commandAliasEnum;
        ::ll::TypedStorage<2, 2, ::CommandFlag>                           flags;
        ::ll::TypedStorage<4, 4, int>                                     firstRule;
        ::ll::TypedStorage<4, 4, int>                                     firstFactorization;
        ::ll::TypedStorage<4, 4, int>                                     firstOptional;
        ::ll::TypedStorage<1, 1, bool>                                    runnable;
        ::ll::TypedStorage<8, 8, ulong>                                   ruleCounter;
        // NOLINTEND

    public:
        // prevent constructor by default
        Signature& operator=(Signature const&);
        Signature(Signature const&);
        Signature();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Signature();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        ::std::string                              name;
        ::Bedrock::typeid_t<::CommandRegistry>     type;
        ParseFunction                              parse;
        ::std::vector<::std::pair<uint64, uint64>> values;
#endif // @header-generator platform
        // NOLINTEND
    };

    struct ParamParseRule {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::UntypedStorage<8, 16> parse;
        ::ll::UntypedStorage<4, 8>  symbol;
#else // @header-generator platform
        ::ll::TypedStorage<
            8,
            8,
            bool (CommandRegistry::*)(
                void*,
                ::CommandRegistry::ParseToken const&,
                ::CommandOrigin const&,
                int,
                ::std::string&,
                ::std::vector<::std::string>&
            ) const>
                                                            parse;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> symbol;
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    struct LexicalToken {
#else // @header-generator platform
    struct ParseRule {
#endif // @header-generator platform
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, char const*>               mText;
        ::ll::TypedStorage<4, 4, uint>                      mLength;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mType;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mIdentifierInfo;
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>  mRegistry;
#else // @header-generator platform
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> nonTerminal;
        ::ll::TypedStorage<
            8,
            64,
            ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>>
                                                                            process;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>> derivation;
        ::ll::TypedStorage<4, 8, ::CommandVersion>                          versions;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
        LexicalToken& operator=(LexicalToken const&);
        LexicalToken(LexicalToken const&);
        LexicalToken();
#else // @header-generator platform
        ParseRule& operator=(ParseRule const&);
        ParseRule(ParseRule const&);
        ParseRule();
#endif // @header-generator platform

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI ::CommandRegistry::LexicalToken& operator=(::CommandLexer::Token const&);
#else // @header-generator platform
        MCAPI ::CommandRegistry::ParseRule& operator=(::CommandRegistry::ParseRule&& rhs);
        // NOLINTEND
    };

    struct SemanticInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                      mIsValid;
        ::ll::TypedStorage<8, 24, ::std::vector<::CommandRegistry::Symbol>> mConstrainedParams;
        ::ll::TypedStorage<8, 32, ::std::string>                            mSoftEnumText;
        ::ll::TypedStorage<8, 32, ::std::string>                            mSoftEnumEscapeCharExceptions;
        ::ll::TypedStorage<8, 16, ::std::set<::CommandRegistry::Symbol>>    mAlreadyCompletedSymbols;
        // NOLINTEND
    };

    struct Signature {
    public:
        // member variables
        // NOLINTBEGIN
        ::std::string                              name;
        ::std::string                              description;
        ::std::vector<::CommandRegistry::Overload> overloads;
        ::std::vector<uint>                        chainedSubcommandIndexes;
        ::CommandPermissionLevel                   permissionLevel;
        ::CommandRegistry::Symbol                  commandSymbol;
        ::CommandRegistry::Symbol                  commandAliasEnum;
        ::CommandFlag                              flags;
        int                                        firstRule;
        int                                        firstFactorization;
        int                                        firstOptional;
        bool                                       runnable;
        uint64                                     ruleCounter;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Signature();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct SymbolHasher {};

    struct SymbolPairHasher {};

    struct ParseTable {
    public:
        // member variables
        // NOLINTBEGI
        ::std::map<
            ::CommandRegistry::Symbol,
            ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>
            first;

        ::std::map<
            ::CommandRegistry::Symbol,
            ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>
            follow;

        ::entt::dense_map<
            ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
            int,
            ::CommandRegistry::SymbolPairHasher,
            ::std::equal_to<void>>
                                   predict;
        ::std::chrono::nanoseconds buildDuration;
#endif // @header-generator platform
        // NOLINTEND
    };

    class Parser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>             mRegistry;
        ::ll::TypedStorage<8, 8, ::CommandRegistry::ParseTable const*> mParseTable;
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 48, std::deque<std::pair<CommandRegistry::Symbol, CommandRegistry::ParseToken*>>> mStack;
        ::ll::TypedStorage<8, 32, ::CommandRegistry::LexicalToken>                                              mNext;
        ::ll::TypedStorage<8, 24, std::string>                                                                  mInput;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry::ParseToken>>                                  mRoot;
        ::ll::TypedStorage<8, 24, std::string>                                                                  mError;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorParams;
        ::ll::TypedStorage<4, 4, int>                       mVersion;
        ::ll::TypedStorage<1, 1, bool>                      mGenerateParams;
        ::ll::TypedStorage<1, 1, bool>                      mBreakAtEnd;
#else // @header-generator platform
        ::ll::TypedStorage<8, 40, ::std::deque<::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::ParseToken*>>>
                                                                                   mStack;
        ::ll::TypedStorage<8, 32, ::CommandRegistry::LexicalToken>                 mNext;
        ::ll::TypedStorage<8, 32, ::std::string>                                   mInput;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry::ParseToken>> mRoot;
        ::ll::TypedStorage<8, 32, ::std::string>                                   mError;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    mErrorParams;
        ::ll::TypedStorage<4, 4, int>                                              mVersion;
        ::ll::TypedStorage<1, 1, bool>                                             mGenerateParams;
        ::ll::TypedStorage<1, 1, bool>                                             mBreakAtEnd;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
        Parser& operator=(Parser const&);
        Parser(Parser const&);
        Parser();

    public:
        // member functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI Parser(::CommandRegistry const&, int);
#else // @header-generator platform
        MCAPI Parser(::CommandRegistry const& registry, int version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool _parse(std::string const&);
#else // @header-generator platform
        MCAPI bool _parse(::std::string const& in);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::unique_ptr<Command> createCommand(::CommandOrigin const&);
#else // @header-generator platform
        MCAPI ::std::unique_ptr<::CommandSelector<::Actor>>
        createSelector(::std::string const& selectorString, ::CommandOrigin const& origin);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::unique_ptr<CommandSelector<Actor>> createSelector(std::string const&, ::CommandOrigin const&);
#else // @header-generator platform
        MCAPI ::std::vector<::std::string> getErrorParams() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string const& getErrorMessage() const;
#else // @header-generator platform
        MCAPI bool parseCommand(::std::string const& in);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::vector<std::string> getErrorParams() const;
#else // @header-generator platform
        MCAPI bool parseSelector(::std::string const& in);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI bool parseCommand(std::string const&);

        MCNAPI bool parseSelector(std::string const&);

        MCNAPI ~Parser();
#else // @header-generator platform
        MCAPI ~Parser();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void* $ctor(::CommandRegistry const&, int);
#else // @header-generator platform
        MCAPI void* $ctor(::CommandRegistry const& registry, int version);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI void $dtor();
#endif // @header-generator platform
        // NOLINTEND
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using ScoreboardScoreAccessor = std::function<int(bool&, const std::string&, const Actor&)>;
#else // @header-generator platform
    using ChainedSubcommandConversionFunction = ::std::function<void(void*, uint64)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using Symbol = ::CommandRegistry::Symbol;
#else // @header-generator platform
    using ChainedSubcommandID = uint;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using HardTerminal = ::CommandLexer::TokenType;
#else // @header-generator platform
    using ChainedSubcommandValueID = uint64;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ProcessFunction =
        std::function<CommandRegistry::ParseToken*(CommandRegistry::ParseToken&, CommandRegistry::Symbol)>;
#else // @header-generator platform
    using CommandOverrideFunctor =
        ::std::function<void(::std::string const&, ::CommandFlag&, ::CommandPermissionLevel&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using SymbolVector = std::vector<CommandRegistry::Symbol>;
#else // @header-generator platform
    using CommandVisitCallback = ::std::function<bool(::CommandRegistry::ParseToken const*, ::CommandOrigin const&)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ParseTableMap = std::map<uint, CommandRegistry::ParseTable>;
#else // @header-generator platform
    using ConstrainedValueID = uint;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ParseMap = std::map<
        CommandRegistry::Symbol,
        entt::dense_set<
            CommandRegistry::Symbol,
            CommandRegistry::SymbolHasher,
            std::equal_to<void>,
            std::allocator<CommandRegistry::Symbol>>>;

    using PredictTable = ::entt::dense_map<
        std::pair<CommandRegistry::Symbol, CommandRegistry::Symbol>,
        int,
        CommandRegistry::SymbolPairHasher,
        std::equal_to<void>,
        std::allocator<std::pair<const std::pair<CommandRegistry::Symbol, CommandRegistry::Symbol>, int>>>;

    using RuleIndex = int;

    using ParseFunction = bool (CommandRegistry::*)(
        void*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const;

    using Terminal = ::CommandRegistry::Symbol;
#else // @header-generator platform
    using ConstrainedValueLookupKey = ::std::pair<uint64, uint>;
#endif // @header-generator platform

    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);

#if defined(LL_PLAT_A) // @header-generator platform
    using ConstrainedValueLookupKey = std::pair<ulong, uint>;

    using CommandOverrideFunctor = std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>;

    using SymbolSet = ::entt::dense_set<
        CommandRegistry::Symbol,
        CommandRegistry::SymbolHasher,
        std::equal_to<void>,
        std::allocator<CommandRegistry::Symbol>>;
#else // @header-generator platform
    using EnumConversionFunction = ::std::function<void(void*, uint64)>;
#endif // @header-generator platform

    using EnumID = uint;

#if defined(LL_PLAT_A) // @header-generator platform
    using ChainedSubcommandID = uint;
#else // @header-generator platform
    using EnumValueID = uint64;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ConstrainedValueID = uint;
#else // @header-generator platform
    using HardTerminal = ::CommandLexer::TokenType;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ValueTypeID = ulong;
#else // @header-generator platform
    using ParamVisitCallback = ::std::function<
        bool(::CommandParameterData const&, ::CommandOrigin const&, ::CommandRegistry::ParseToken const*)>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ChainedSubcommandValueID = ulong;
#else // @header-generator platform
    using ParseMap = ::std::map<
        ::CommandRegistry::Symbol,
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using ParamVisitCallback =
        std::function<bool(const CommandParameterData&, const CommandOrigin&, const CommandRegistry::ParseToken*)>;
#else // @header-generator platform
    using ParseTableMap = ::std::map<uint, ::CommandRegistry::ParseTable>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using CommandVisitCallback = std::function<bool(const CommandRegistry::ParseToken*, const CommandOrigin&)>;
#else // @header-generator platform
    using PredictTable = ::entt::dense_map<
        ::std::pair<::CommandRegistry::Symbol, ::CommandRegistry::Symbol>,
        int,
        ::CommandRegistry::SymbolPairHasher,
        ::std::equal_to<void>>;

    using ProcessFunction =
        ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>;

    using RuleIndex = int;

    using ScoreboardScoreAccessor = ::std::function<int(bool&, ::std::string const&, ::Actor const&)>;
#endif // @header-generator platform

    using SemanticConstraintID = uchar;

#if defined(LL_PLAT_A) // @header-generator platform
    using EnumValueID = ulong;
#else // @header-generator platform
    using SoftEnumID = uint;

    using Symbol = ::CommandRegistry::Symbol;

    using SymbolSet =
        ::entt::dense_set<::CommandRegistry::Symbol, ::CommandRegistry::SymbolHasher, ::std::equal_to<void>>;

    using SymbolVector = ::std::vector<::CommandRegistry::Symbol>;

    using Terminal = ::CommandRegistry::Symbol;

    using ValueTypeID = uint64;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::UntypedStorage<8, 48> mNetworkUpdateCallback;
    ::ll::UntypedStorage<8, 48> mGetScoreForObjective;
    ::ll::TypedStorage<1, 1, bool> mIsEduMode;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::ParseRule>> mRules;
    ::ll::TypedStorage<8, 24, std::map<uint, CommandRegistry::ParseTable>> mParseTables;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::OptionalParameterChain>> mOptionals;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mEnumValues;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Enum>> mEnums;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mChainedSubcommandValues;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::ChainedSubcommand>> mChainedSubcommands;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Factorization>> mFactorizations;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPostfixes;
    ::ll::TypedStorage<8, 24, std::map<std::string, uint>> mEnumLookup;
    ::ll::TypedStorage<8, 24, std::map<std::string, ulong>> mEnumValueLookup;
    ::ll::TypedStorage<8, 24, std::map<std::string, uint>> mChainedSubcommandLookup;
    ::ll::TypedStorage<8, 24, std::map<std::string, ulong>> mChainedSubcommandValueLookup;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Symbol>> mCommandSymbols;
    ::ll::TypedStorage<8, 24, std::map<std::string, CommandRegistry::Signature>> mSignatures;
    ::ll::UntypedStorage<8, 24> mTypeLookup;
    ::ll::TypedStorage<8, 24, std::map<std::string, std::string>> mAliases;
    ::ll::TypedStorage<8, 24, std::vector<SemanticConstraint>> mSemanticConstraints;
    ::ll::TypedStorage<8, 24, std::map<SemanticConstraint, uchar>> mSemanticConstraintLookup;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::ConstrainedValue>> mConstrainedValues;
    ::ll::TypedStorage<8, 24, std::map<std::pair<ulong, uint>, uint>> mConstrainedValueLookup;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::SoftEnum>> mSoftEnums;
    ::ll::TypedStorage<8, 24, std::map<std::string, uint>> mSoftEnumLookup;
    ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::RegistryState>> mStateStack;
    ::ll::TypedStorage<4, 100, ::CommandRegistry::ParamSymbols> mArgs;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mSkipOnEpsAutocompleteSymbols;
    ::ll::TypedStorage<8, 40, std::unordered_set<int>> mAllowEmptySymbols;
    ::ll::UntypedStorage<8, 48> mCommandOverrideFunctor;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRunStats>> mCommandRunStats;
    ::ll::TypedStorage<8, 8, std::string(*)(std::string const&, std::unordered_map<mce::UUID, PlayerListEntry> const&, ::AutoCompleteInformation&)> mAutoCompletePlayerMention;
    // clang-format on
#else // @header-generator platform
    ::std::function<void(::Packet const&)>                   mNetworkUpdateCallback;
    ScoreboardScoreAccessor                                  mGetScoreForObjective;
    bool                                                     mIsEduMode;
    ::std::vector<::CommandRegistry::ParseRule>              mRules;
    ::std::map<uint, ::CommandRegistry::ParseTable>          mParseTables;
    ::std::vector<::CommandRegistry::OptionalParameterChain> mOptionals;
    ::std::vector<::std::string>                             mEnumValues;
    ::std::vector<::CommandRegistry::Enum>                   mEnums;
    ::std::vector<::std::string>                             mChainedSubcommandValues;
    ::std::vector<::CommandRegistry::ChainedSubcommand>      mChainedSubcommands;
    ::std::vector<::CommandRegistry::Factorization>          mFactorizations;
    ::std::vector<::std::string>                             mPostfixes;
    ::std::map<::std::string, uint>                          mEnumLookup;
    ::std::map<::std::string, uint64>                        mEnumValueLookup;
    ::std::map<::std::string, uint>                          mChainedSubcommandLookup;
    ::std::map<::std::string, uint64>                        mChainedSubcommandValueLookup;
    ::std::vector<::CommandRegistry::Symbol>                 mCommandSymbols;
    ::std::map<::std::string, ::CommandRegistry::Signature>  mSignatures;
    ::std::map<::Bedrock::typeid_t<::CommandRegistry>, int>  mTypeLookup;
    ::std::map<::std::string, ::std::string>                 mAliases;
    ::std::vector<::SemanticConstraint>                      mSemanticConstraints;
    ::std::map<::SemanticConstraint, uchar>                  mSemanticConstraintLookup;
    ::std::vector<::CommandRegistry::ConstrainedValue>       mConstrainedValues;
    ::std::map<::std::pair<uint64, uint>, uint>              mConstrainedValueLookup;
    ::std::vector<::CommandRegistry::SoftEnum>               mSoftEnums;
    ::std::map<::std::string, uint>                          mSoftEnumLookup;
    ::std::vector<::CommandRegistry::RegistryState>          mStateStack;
    ::CommandRegistry::ParamSymbols                          mArgs;
    ::std::unordered_set<int>                                mSkipOnEpsAutocompleteSymbols;
    ::std::unordered_set<int>                                mAllowEmptySymbols;
    CommandOverrideFunctor                                   mCommandOverrideFunctor;
    ::std::unique_ptr<::CommandRunStats>                     mCommandRunStats;
    ::ll::TypedStorage<
        8,
        8,
        ::std::string (*)(
            ::std::string const&,
            ::std::unordered_map<::mce::UUID, ::PlayerListEntry> const&,
            ::AutoCompleteInformation&
        )>
        mAutoCompletePlayerMention;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    template <class T>
    bool parse(
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const&               origin,
        int                                version,
        std::string&                       error,
        std::vector<std::string>&          errorParams
    ) const;

    template <class E, class C>
    bool parseEnum(
        void*                              storage,
        CommandRegistry::ParseToken const& token,
        CommandOrigin const&               origin,
        int                                version,
        std::string&                       error,
        std::vector<std::string>&          errorParams
    ) const;

    uint64 getEnumData(ParseToken const& token) const {
        auto& values = mEnums[token.type.toIndex()].values;
        return std::lower_bound(
                   values.begin(),
                   values.end(),
                   token.child->type.toIndex(),
                   [](auto& pair, auto& child) { return pair.first < child; }
        )->second;
    }

    template <class T>
    struct ParseRuleFor {
        MCAPI static ParamParseRule const& instance();
    };
#endif // @header-generator platform

public:
    // prevent constructor by default
    CommandRegistry();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI explicit CommandRegistry(::CommandRegistryArguments);
#else // @header-generator platform
    MCAPI explicit CommandRegistry(::CommandRegistryArguments args);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, uint>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
#else // @header-generator platform
    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                                   name,
        ::std::vector<::std::pair<::std::string, uint>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                 type,
        bool (CommandRegistry::*parse)(
#endif // @header-generator platform
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
#if defined(LL_PLAT_A) // @header-generator platform
            std::string&,
            std::vector<std::string>&
#else // @header-generator platform
            ::std::string&,
            ::std::vector<::std::string>&
#endif // @header-generator platform
        ) const,
#if defined(LL_PLAT_A) // @header-generator platform
        ::CommandRegistry::Signature*
#else // @header-generator platform
        ::CommandRegistry::Signature* signature
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&,
        std::vector<std::pair<ulong, uint>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        ::std::string const&                            name,
        ::std::vector<::std::pair<uint64, uint>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>          type,
        bool (::CommandRegistry::*parse)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            ::std::string&,
            ::std::vector<::std::string>&
        ) const,
        ::CommandRegistry::Signature* signature
    );
#endif

    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                                     name,
        ::std::vector<::std::pair<::std::string, uint64>> const& strings,
        ::Bedrock::typeid_t<::CommandRegistry>                   type,
        bool (CommandRegistry::*parse)(
#endif // @header-generator platform
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
#if defined(LL_PLAT_A) // @header-generator platform
            std::string&,
            std::vector<std::string>&
        ) const,
        ::CommandRegistry::Signature*
#else // @header-generator platform
            ::std::string&,
            ::std::vector<::std::string>&
        ) const
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, ulong>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
#else // @header-generator platform
    MCAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        ::std::string const&                              name,
        ::std::vector<::std::pair<uint64, uint64>> const& values,
        ::Bedrock::typeid_t<::CommandRegistry>            type,
        bool (::CommandRegistry::*parse)(
#endif // @header-generator platform
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
#if defined(LL_PLAT_A) // @header-generator platform
            std::string&,
            std::vector<std::string>&
#else // @header-generator platform
            ::std::string&,
            ::std::vector<::std::string>&
#endif // @header-generator platform
        ) const
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<ulong, ulong>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            std::string&,
            std::vector<std::string>&
        ) const
    );

    MCNAPI std::unique_ptr<CommandSelector<Actor>> _createSelector(
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::CommandSelector<::Actor>> _createSelector(
        ::CommandRegistry::ParseToken const& root,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _isParamFullyParsed(::CommandRegistry::ParseToken const*) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::CommandRegistry::Symbol _getConstrainedParamEnumSymbol(::CommandRegistry::Symbol symbol) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool _matchesEnumConstraintsSet(
        ::CommandRegistry::Symbol const&,
        ::CommandOrigin const&,
        ::CommandRegistry::Symbol const&,
        ::SemanticConstraint
#else // @header-generator platform
    MCAPI bool _matchesEnumConstraintsSet(
        ::CommandRegistry::Symbol const& commandParamSymbol,
        ::CommandOrigin const&           origin,
        ::CommandRegistry::Symbol const& value,
        ::SemanticConstraint             requiredConstraints
#endif // @header-generator platform
    ) const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addChainedSubcommandValuesToExisting(uint, std::vector<std::pair<ulong, uint>> const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void addChainedSubcommandValuesToExisting(uint index, ::std::vector<::std::pair<uint64, uint>> const& values);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, ::SemanticConstraint);

    MCNAPI int addEnumValues(std::string const&, std::vector<std::string> const&);

    MCNAPI void addEnumValuesToExisting(uint, std::vector<std::pair<ulong, ulong>> const&);

    MCNAPI ::CommandRegistry::Symbol addPostfix(std::string const&);

    MCNAPI void addRule(
        ::CommandRegistry::Symbol,
        std::vector<CommandRegistry::Symbol>,
        std::function<CommandRegistry::ParseToken*(CommandRegistry::ParseToken&, CommandRegistry::Symbol)>,
        ::CommandVersion
#else // @header-generator platform
    MCAPI void addEnumValueConstraints(
        ::std::string const&                enumName,
        ::std::vector<::std::string> const& values,
        ::SemanticConstraint                constraints
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSemanticConstraint(::SemanticConstraint);
#else // @header-generator platform
    MCAPI int addEnumValues(::std::string const& name, ::std::vector<::std::string> const& values);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int addSoftEnum(std::string const&, std::vector<std::string>);
#else // @header-generator platform
    MCAPI void addEnumValuesToExisting(uint index, ::std::vector<::std::pair<uint64, uint64>> const& values);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI ::CommandRegistry::Symbol addPostfix(::std::string const& name);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandRegistry::Symbol addSoftTerminal(std::string const&);

    MCNAPI void autoComplete(
        ::CommandRegistry::Symbol,
        std::string const&,
        std::string const&,
        bool,
        ::CommandOrigin const&,
        ::AutoCompleteInformation&,
        ::CommandRegistry::SemanticInfo&
    ) const;

    MCNAPI void autoCompleteCommand(std::string const&, ::CommandOrigin const&, ::AutoCompleteInformation&) const;

    MCNAPI void buildFirstSet(::CommandRegistry::ParseTable&, ::CommandRegistry::Symbol, uint) const;

    MCNAPI void buildFollowSet(
        ::CommandRegistry::ParseTable&,
        ::CommandRegistry::Symbol,
        uint,
        std::set<CommandRegistry::Symbol>&
    ) const;

    MCNAPI void buildFollowSetsForNonTerminals(::CommandRegistry::ParseTable&, uint) const;

    MCNAPI ::CommandRegistry::Symbol
    buildRules(::CommandRegistry::Signature&, std::vector<gsl::not_null<CommandRegistry::Overload*>> const&, ulong);

    MCNAPI bool buildSelector(::ActorSelectorArgs const&, ::CommandSelectorBase*, std::string&) const;

    MCNAPI bool canCommandBeUsed(std::string const&, ::CommandPermissionLevel const&, bool, bool) const;

    MCNAPI std::unique_ptr<Command> createCommand(
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const;

    MCNAPI std::string describe(::CommandRegistry::Symbol) const;

    MCNAPI std::string describe(::CommandParameterData const&) const;

    MCNAPI std::string describe(
        ::CommandRegistry::Signature const&,
        std::string const&,
        ::CommandRegistry::Overload const&,
        uint,
        uint*,
        uint*
    ) const;

    MCNAPI bool enabledInEditor(std::string const&) const;

    MCNAPI void finalizeChainedSubcommandOverloadRules(char const*);

    MCNAPI ::CommandRegistry::Signature const* findCommand(std::string const&) const;

    MCNAPI ::CommandRegistry::Signature* findCommand(std::string const&);

    MCNAPI void fireCommandParseTableTelemetry(::IMinecraftEventing const&, bool const) const;

    MCNAPI void forEachNonTerminal(std::function<void(CommandRegistry::Symbol)>) const;

    MCNAPI ::Json::Value generateDocumentationMetadata(bool) const;

    MCNAPI std::vector<std::string> getAliases(std::string const&) const;

    MCNAPI std::vector<std::string> getAlphabeticalLookup(::CommandOrigin const&) const;

    MCNAPI std::unique_ptr<AutoCompleteInformation>
           getAutoCompleteOptions(::CommandOrigin const&, std::string const&, uint) const;

    MCNAPI std::string getCommandName(std::string const&) const;

    MCNAPI ::CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(::CommandOrigin const&, std::string const&) const;

    MCNAPI ::CommandRunStats& getCommandRunStats() const;

    MCNAPI ulong getEnumData(::CommandRegistry::ParseToken const&) const;

    MCNAPI ::InvertableFilter<std::string> getInvertableFilter(::CommandRegistry::ParseToken const&) const;

    MCNAPI ::CommandSyntaxInformation
    getOverloadSyntaxInformation(::CommandOrigin const&, std::string const&, uint) const;

    MCNAPI bool hasCommands() const;

    MCNAPI bool hasState() const;

    MCNAPI bool isCommandOfType(std::string const&, ::CommandTypeFlag) const;

    MCNAPI bool isValid(::CommandRegistry::Symbol) const;

    MCNAPI bool isValidCommand(std::string const&) const;

    MCNAPI void loadRemoteCommands(::AvailableCommandsPacket const&);

    MCNAPI bool originCanRun(::CommandOrigin const&, ::CommandRegistry::Signature const&) const;

    MCNAPI bool originCanRunOverloadWithParam(::CommandOrigin const&, ::CommandParameterData const&) const;

    MCNAPI std::string parsePartialCommand(::CommandRegistry::Parser&, std::string const&, uint, bool) const;

    MCNAPI bool parseSelector(
        ::ActorSelectorArgs&,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&
    ) const;

    MCNAPI bool parseSelector(
        ::CommandSelectorBase*,
        ::CommandRegistry::ParseToken const&,
        ::CommandOrigin const&,
        int,
        std::string&,
        std::vector<std::string>&,
        bool
    ) const;

    MCNAPI void popState();

    MCNAPI void pushState();

    MCNAPI void registerAlias(std::string, std::string);

    MCNAPI void
    registerCommand(std::string const&, char const*, ::CommandPermissionLevel, ::CommandFlag, ::CommandFlag);

    MCNAPI void registerOverload(
        char const*,
        ::CommandVersion,
        std::function<std::unique_ptr<Command>()>,
        std::vector<CommandParameterData>
#else // @header-generator platform
    MCAPI void addRule(
        ::CommandRegistry::Symbol                symbol,
        ::std::vector<::CommandRegistry::Symbol> derivation,
        ::std::function<::CommandRegistry::ParseToken*(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol)>
                         process,
        ::CommandVersion versions
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void registerOverloadInternal(::CommandRegistry::Signature&, ::CommandRegistry::Overload&);
#else // @header-generator platform
    MCAPI void addSemanticConstraint(::SemanticConstraint constraintType);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);
#else // @header-generator platform
    MCAPI int addSoftEnum(::std::string const& name, ::std::vector<::std::string> values);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool requiresCheatsEnabled(std::string const&) const;
#else // @header-generator platform
    MCAPI void addSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::AvailableCommandsPacket serializeAvailableCommands() const;
#else // @header-generator platform
    MCAPI ::CommandRegistry::Symbol addSoftTerminal(::std::string const& name);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
        setCommandRegistrationOverride(std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI void autoComplete(
        ::CommandRegistry::Symbol        symbol,
        ::std::string const&             cmdLine,
        ::std::string const&             partialMatch,
        bool                             newWord,
        ::CommandOrigin const&           origin,
        ::AutoCompleteInformation&       info,
        ::CommandRegistry::SemanticInfo& semanticInfo
    ) const;

    MCAPI void autoCompleteCommand(
        ::std::string const&       partialMatch,
        ::CommandOrigin const&     origin,
        ::AutoCompleteInformation& info
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setScoreCallback(std::function<int(bool&, const std::string&, const Actor&)>);
#else // @header-generator platform
    MCAPI void buildFirstSet(::CommandRegistry::ParseTable& table, ::CommandRegistry::Symbol t, uint version) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setSoftEnumValues(std::string const&, std::vector<std::string>);
#else // @header-generator platform
    MCAPI void buildFollowSet(
        ::CommandRegistry::ParseTable&         table,
        ::CommandRegistry::Symbol              t,
        uint                                   version,
        ::std::set<::CommandRegistry::Symbol>& workingSet
    ) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setupChainedSubcommandOverloadRules(::CommandRegistry::Signature&);
#else // @header-generator platform
    MCAPI ::CommandRegistry::Symbol buildRules(
        ::CommandRegistry::Signature&                                       signature,
        ::std::vector<::gsl::not_null<::CommandRegistry::Overload*>> const& overloads,
        uint64                                                              firstParam
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void setupOverloadRules(::CommandRegistry::Signature&);
#else // @header-generator platform
    MCAPI bool
    buildSelector(::ActorSelectorArgs const& args, ::CommandSelectorBase* output, ::std::string& error) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string symbolToString(::CommandRegistry::Symbol) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool canCommandBeUsed(
        ::std::string const&            commandLine,
        ::CommandPermissionLevel const& permissionLevel,
        bool                            cheatsEnabled,
        bool                            isEditorWorld
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CommandRegistry();
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::Command> createCommand(
        ::CommandRegistry::ParseToken const& root,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI ::std::string describe(::CommandRegistry::Symbol symbol) const;

#ifdef LL_PLAT_C
    MCAPI ::std::string describe(
        ::CommandRegistry::Signature const& command,
        ::std::string const&                alias,
        ::CommandRegistry::Overload const&  overload,
        uint                                highlight,
        uint*                               start,
        uint*                               length
    ) const;
#endif

    MCAPI void finalizeChainedSubcommandOverloadRules(char const* command);

    MCFOLD ::CommandRegistry::Signature const* findCommand(::std::string const& name) const;

    MCFOLD ::CommandRegistry::Signature* findCommand(::std::string const& name);

    MCAPI void fireCommandParseTableTelemetry(::IMinecraftEventing const& eventing, bool isServer) const;

    MCAPI void forEachNonTerminal(::std::function<void(::CommandRegistry::Symbol)> func) const;

    MCAPI ::Json::Value generateDocumentationMetadata(bool generateInternalMetadata) const;

    MCAPI ::std::vector<::std::string> getAliases(::std::string const& command) const;

    MCAPI ::std::vector<::std::string> getAlphabeticalLookup(::CommandOrigin const& origin) const;

#ifdef LL_PLAT_C
    MCAPI ::std::unique_ptr<::AutoCompleteInformation> getAutoCompleteOptions(
        ::CommandOrigin const& origin,
        ::std::string const&   _cmdLine,
        uint                   cursorPositionUnsafe
    ) const;
#endif

    MCAPI ::std::string getCommandName(::std::string const& commandLine) const;

    MCAPI ::CommandSyntaxInformation
    getCommandOverloadSyntaxInformation(::CommandOrigin const& origin, ::std::string const& commandName) const;

    MCAPI ::InvertableFilter<::std::string> getInvertableFilter(::CommandRegistry::ParseToken const& token) const;

#ifdef LL_PLAT_C
    MCAPI ::CommandSyntaxInformation getOverloadSyntaxInformation(
        ::CommandOrigin const& origin,
        ::std::string const&   cmdLine,
        uint                   cursorPosition
    ) const;

    MCAPI bool isCommandOfType(::std::string const& nameIn, ::CommandTypeFlag commandType) const;
#endif

    MCAPI bool isValid(::CommandRegistry::Symbol symbol) const;

#ifdef LL_PLAT_C
    MCAPI void loadRemoteCommands(::AvailableCommandsPacket const& packet);
#endif

    MCAPI bool originCanRun(::CommandOrigin const& origin, ::CommandRegistry::Signature const& command) const;

#ifdef LL_PLAT_C
    MCAPI bool originCanRunOverloadWithParam(::CommandOrigin const& origin, ::CommandParameterData const& param) const;

    MCAPI ::std::string parsePartialCommand(
        ::CommandRegistry::Parser& parser,
        ::std::string const&       _cmdLine,
        uint                       cursorPosition,
        bool                       cutLastToken
    ) const;
#endif

    MCAPI bool parseSelector(
        ::ActorSelectorArgs&                 args,
        ::CommandRegistry::ParseToken const& token,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    ) const;

    MCAPI bool parseSelector(
        ::CommandSelectorBase*               output,
        ::CommandRegistry::ParseToken const& token,
        ::CommandOrigin const&               origin,
        int                                  version,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams,
        bool                                 wildcard
    ) const;

#ifdef LL_PLAT_C
    MCAPI void popState();

    MCAPI void pushState();
#endif

    MCAPI void registerAlias(::std::string name, ::std::string alias);

    MCAPI void registerCommand(
        ::std::string const&     name,
        char const*              description,
        ::CommandPermissionLevel requirement,
        ::CommandFlag            f1,
        ::CommandFlag            f2 = {}
    );

    MCAPI void registerOverload(
        char const*                                     command,
        ::CommandVersion                                version,
        ::std::function<::std::unique_ptr<::Command>()> allocFn,
        ::std::vector<::CommandParameterData>           params
    );

    MCAPI void registerOverloadInternal(::CommandRegistry::Signature& signature, ::CommandRegistry::Overload& overload);

    MCAPI void removeSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI ::AvailableCommandsPacket serializeAvailableCommands() const;

    MCAPI void setCommandRegistrationOverride(CommandOverrideFunctor functor);

    MCAPI void setScoreCallback(::std::function<int(bool&, ::std::string const&, ::Actor const&)> callback);

    MCAPI void setSoftEnumValues(::std::string const& enumName, ::std::vector<::std::string> values);

    MCAPI void setupChainedSubcommandOverloadRules(::CommandRegistry::Signature& signature);

#ifdef LL_PLAT_C
    MCAPI void setupOverloadRules(::CommandRegistry::Signature& signature);
#endif

    MCAPI ::std::string symbolToString(::CommandRegistry::Symbol symbol) const;

    MCAPI ~CommandRegistry();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::BlockType const* _getBlockFromCmdParameters(std::string const&);
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::BlockType const* _getBlockFromCmdParameters(::std::string const& parameters);
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string _removeStringQuotes(std::string const&);
#else // @header-generator platform
    MCAPI static ::std::string _removeStringQuotes(::std::string const& str);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void addNonEpsilonSymbols(
        ::entt::dense_set<
            CommandRegistry::Symbol,
            CommandRegistry::SymbolHasher,
            std::equal_to<void>,
            std::allocator<CommandRegistry::Symbol>>&,
        ::entt::dense_set<
            CommandRegistry::Symbol,
            CommandRegistry::SymbolHasher,
            std::equal_to<void>,
            std::allocator<CommandRegistry::Symbol>> const&
#else // @header-generator platform
    MCFOLD static ::CommandRegistry::ParseToken*
    collapse(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);

    MCAPI static ::CommandRegistry::ParseToken* collapseOn(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CommandRegistry::ParseToken* collapse(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol);
#else // @header-generator platform
    MCAPI static ::CommandRegistry::ParseToken*
    expand(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::CommandRegistry::ParseToken*
    collapseOn(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol, ::CommandRegistry::Symbol);

    MCNAPI static ::CommandRegistry::ParseToken* expand(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol);

    MCNAPI static ::CommandRegistry::ParseToken*
    expandExcept(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol, ::CommandRegistry::Symbol);

    MCNAPI static ::CommandRegistry::ParseToken*
    fold(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol, ::CommandRegistry::Symbol);

    MCNAPI static ::CommandRegistry::Symbol getParseSymbol(::CommandParameterData const&);

    MCNAPI static ::CommandRegistry::ParseToken* kill(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol);

    MCNAPI static bool readFloat(float&, ::CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    MCNAPI static bool readInt(int&, ::CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);

    MCNAPI static bool readRelativeCoordinate(
        bool&,
        float&,
        ::CommandRegistry::ParseToken const&,
        bool,
        std::string&,
        std::vector<std::string>&
#else // @header-generator platform
    MCAPI static ::CommandRegistry::ParseToken* expandExcept(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool
    readString(std::string&, ::CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
#else // @header-generator platform
    MCAPI static ::CommandRegistry::ParseToken* fold(
        ::CommandRegistry::ParseToken& parent,
        ::CommandRegistry::Symbol      symbol,
        ::CommandRegistry::Symbol      boundSymbol
    );

    MCAPI static ::CommandRegistry::ParseToken*
    kill(::CommandRegistry::ParseToken& parent, ::CommandRegistry::Symbol symbol);

    MCAPI static bool readFloat(
        float&                               value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readInt(
        int&                                 value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readRelativeCoordinate(
        bool&                                relative,
        float&                               offset,
        ::CommandRegistry::ParseToken const& token,
        bool                                 readIntegerAsCentered,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );

    MCAPI static bool readString(
        ::std::string&                       value,
        ::CommandRegistry::ParseToken const& token,
        ::std::string&                       error,
        ::std::vector<::std::string>&        errorParams
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& CODE_STATUS_PROPERTY_NAME();
#else // @header-generator platform
    MCAPI static char const*& COMMAND_NAME_ENUM_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& COMMAND_NAME_ENUM_NAME();
#else // @header-generator platform
    MCAPI static char const*& TAG_VALUES_SOFTENUM_NAME();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static char const*& FUNCTION_NAME_SOFTENUM_NAME();

    MCNAPI static char const*& HASITEM_PARAM_DATA();

    MCNAPI static char const*& HASITEM_PARAM_ITEM();

    MCNAPI static char const*& HASITEM_PARAM_LOCATION();

    MCNAPI static char const*& HASITEM_PARAM_QUANTITY();

    MCNAPI static char const*& HASITEM_PARAM_SLOT();

    MCNAPI static char const*& HASPERMISSIONSTATE_ENUM_DISABLED();

    MCNAPI static char const*& HASPERMISSIONSTATE_ENUM_ENABLED();

    MCNAPI static char const*& HASPROPERTY_PARAM_PROPERTY_NAME();

    MCNAPI static char const*& TAG_VALUES_SOFTENUM_NAME();

    MCNAPI static char const*& UNLOCKABLE_RECIPES_SOFTENUM_NAME();
#else // @header-generator platform
    MCAPI static char const*& UNLOCKABLE_RECIPES_SOFTENUM_NAME();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::CommandRegistryArguments);
#else // @header-generator platform
    MCAPI void* $ctor(::CommandRegistryArguments args);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// following are the functions required by CommandParameterData's ParseFunction
MCTAPI bool CommandRegistry::parse<std::string>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<int>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<float>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<Json::Value>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandCompareOperator>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandFilePath>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandIntegerRange>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandMessage>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandOperator>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandPosition>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandPositionFloat>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandRawText>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandSelector<Actor>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandSelector<Player>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<CommandWildcardInt>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<class RelativeFloat>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<WildcardCommandSelector<Actor>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<std::unique_ptr<::Command>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parse<std::vector<BlockStateCommandParam>>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

MCTAPI bool CommandRegistry::parseEnum<CommandChainedSubcommand, void>(
    void*,
    CommandRegistry::ParseToken const&,
    CommandOrigin const&,
    int,
    std::string&,
    std::vector<std::string>&
) const;

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::basic_string<char, ::std::char_traits<char>, ::std::allocator<char> >>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, bool>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, float>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, int>();
// clang-format on
#endif // @header-generator platform
