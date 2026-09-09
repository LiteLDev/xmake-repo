#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/copyable_function.h"
#include "mc/server/commands/BlockStateCommandParam.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandLexer.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/CommandStatus.h"
#include "mc/server/commands/CommandTypeFlag.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/server/commands/SemanticConstraint.h"
#include "mc/world/actor/player/PlayerListEntry.h"
#include "mc/world/actor/selectors/InvertableFilter.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AvailableCommandsPacket;
class BlockType;
class Command;
class CommandParameterData;
class CommandRunStats;
class CommandSelectorBase;
class IMinecraftEventing;
class Packet;
struct ActorSelectorArgs;
struct AutoCompleteInformation;
struct CommandFlag;
struct CommandRegistryArguments;
struct CommandSyntaxInformation;
namespace Json { class Value; }
namespace flighting { class IFlightReader; }
// clang-format on

class CommandRegistry {
public:
    // CommandRegistry inner types declare
    // clang-format off
    class Symbol;
    struct SymbolHasher;
    struct SymbolPairHasher;
    struct ParseTable;
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
    class Parser;
    // clang-format on

    // CommandRegistry inner types define
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

    class Symbol {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mValue;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int value() const;
        // NOLINTEND
    };

    struct SymbolHasher {};

    struct SymbolPairHasher {};

    struct ParseTable {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND

    public:
        // prevent constructor by default
        Overload();
    };

    struct ConstrainedValue {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mValue;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mEnum;
        ::ll::TypedStorage<8, 24, std::vector<uchar>>       mConstraints;
        // NOLINTEND

    public:
        // prevent constructor by default
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RegistryState(::CommandRegistry::RegistryState const&);

        MCNAPI ~RegistryState();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CommandRegistry::RegistryState const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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

    struct SemanticInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                  mIsValid;
        ::ll::TypedStorage<8, 24, std::vector<CommandRegistry::Symbol>> mConstrainedParams;
        ::ll::TypedStorage<8, 24, std::string>                          mSoftEnumText;
        ::ll::TypedStorage<8, 24, std::string>                          mSoftEnumEscapeCharExceptions;
        ::ll::TypedStorage<8, 24, std::set<CommandRegistry::Symbol>>    mAlreadyCompletedSymbols;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~SemanticInfo();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    struct ChainedSubcommand {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    struct Factorization {
    public:
        // member variables
        // NOLINTBEGIN
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
        // NOLINTEND
    };

    struct ParamParseRule {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> parse;
        ::ll::UntypedStorage<4, 8>  symbol;
        // NOLINTEND
    };

    struct LexicalToken {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, char const*>               mText;
        ::ll::TypedStorage<4, 4, uint>                      mLength;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mType;
        ::ll::TypedStorage<4, 4, ::CommandRegistry::Symbol> mIdentifierInfo;
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>  mRegistry;
        // NOLINTEND

    public:
        // prevent constructor by default
        LexicalToken& operator=(LexicalToken const&);
        LexicalToken(LexicalToken const&);
        LexicalToken();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::CommandRegistry::LexicalToken& operator=(::CommandLexer::Token const&);
        // NOLINTEND
    };

    class Parser {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::CommandRegistry const&>             mRegistry;
        ::ll::TypedStorage<8, 8, ::CommandRegistry::ParseTable const*> mParseTable;
        ::ll::TypedStorage<8, 48, std::deque<std::pair<CommandRegistry::Symbol, CommandRegistry::ParseToken*>>> mStack;
        ::ll::TypedStorage<8, 32, ::CommandRegistry::LexicalToken>                                              mNext;
        ::ll::TypedStorage<8, 24, std::string>                                                                  mInput;
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandRegistry::ParseToken>>                                  mRoot;
        ::ll::TypedStorage<8, 24, std::string>                                                                  mError;
        ::ll::TypedStorage<8, 24, std::vector<std::string>> mErrorParams;
        ::ll::TypedStorage<4, 4, int>                       mVersion;
        ::ll::TypedStorage<1, 1, bool>                      mGenerateParams;
        ::ll::TypedStorage<1, 1, bool>                      mBreakAtEnd;
        // NOLINTEND

    public:
        // prevent constructor by default
        Parser& operator=(Parser const&);
        Parser(Parser const&);
        Parser();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Parser(::CommandRegistry const&, int);

        MCNAPI bool _parse(std::string const&);

        MCNAPI std::unique_ptr<Command> createCommand(::CommandOrigin const&);

        MCNAPI std::unique_ptr<CommandSelector<Actor>> createSelector(std::string const&, ::CommandOrigin const&);

        MCNAPI std::string const& getErrorMessage() const;

        MCNAPI std::vector<std::string> getErrorParams() const;

        MCNAPI bool parseCommand(std::string const&);

        MCNAPI bool parseSelector(std::string const&);

        MCNAPI ~Parser();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::CommandRegistry const&, int);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using ScoreboardScoreAccessor = std::function<int(bool&, const std::string&, const Actor&)>;

    using Symbol = ::CommandRegistry::Symbol;

    using HardTerminal = ::CommandLexer::TokenType;

    using ProcessFunction =
        std::function<CommandRegistry::ParseToken*(CommandRegistry::ParseToken&, CommandRegistry::Symbol)>;

    using SymbolVector = std::vector<CommandRegistry::Symbol>;

    using ParseTableMap = std::map<uint, CommandRegistry::ParseTable>;

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

    using CustomStorageGetFn = void* (*)(::Command*, int);

    using CustomStorageIsSetFn = bool* (*)(::Command*, int);

    using ConstrainedValueLookupKey = std::pair<ulong, uint>;

    using CommandOverrideFunctor = std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>;

    using SymbolSet = ::entt::dense_set<
        CommandRegistry::Symbol,
        CommandRegistry::SymbolHasher,
        std::equal_to<void>,
        std::allocator<CommandRegistry::Symbol>>;

    using EnumID = uint;

    using ChainedSubcommandID = uint;

    using ConstrainedValueID = uint;

    using ValueTypeID = ulong;

    using ChainedSubcommandValueID = ulong;

    using ParamVisitCallback =
        std::function<bool(const CommandParameterData&, const CommandOrigin&, const CommandRegistry::ParseToken*)>;

    using CommandVisitCallback = std::function<bool(const CommandRegistry::ParseToken*, const CommandOrigin&)>;

    using SemanticConstraintID = uchar;

    using EnumValueID = ulong;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CommandRegistry(::CommandRegistryArguments);

    MCNAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, uint>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            std::string&,
            std::vector<std::string>&
        ) const,
        ::CommandRegistry::Signature*
    );

    MCNAPI ::CommandRegistry::Symbol _addChainedSubcommandValuesInternal(
        std::string const&,
        std::vector<std::pair<ulong, uint>> const&,
        ::Bedrock::typeid_t<CommandRegistry>,
        bool (CommandRegistry::*)(
            void*,
            ::CommandRegistry::ParseToken const&,
            ::CommandOrigin const&,
            int,
            std::string&,
            std::vector<std::string>&
        ) const,
        ::CommandRegistry::Signature*
    );

    MCNAPI ::CommandRegistry::Symbol _addEnumValuesInternal(
        std::string const&,
        std::vector<std::pair<std::string, ulong>> const&,
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
    ) const;

    MCNAPI bool _isParamFullyParsed(::CommandRegistry::ParseToken const*) const;

    MCNAPI bool _matchesEnumConstraintsSet(
        ::CommandRegistry::Symbol const&,
        ::CommandOrigin const&,
        ::CommandRegistry::Symbol const&,
        ::SemanticConstraint
    ) const;

    MCNAPI void addChainedSubcommandValuesToExisting(uint, std::vector<std::pair<ulong, uint>> const&);

    MCNAPI void addEnumValueConstraints(std::string const&, std::vector<std::string> const&, ::SemanticConstraint);

    MCNAPI int addEnumValues(std::string const&, std::vector<std::string> const&);

    MCNAPI void addEnumValuesToExisting(uint, std::vector<std::pair<ulong, ulong>> const&);

    MCNAPI ::CommandRegistry::Symbol addPostfix(std::string const&);

    MCNAPI void addRule(
        ::CommandRegistry::Symbol,
        std::vector<CommandRegistry::Symbol>,
        std::function<CommandRegistry::ParseToken*(CommandRegistry::ParseToken&, CommandRegistry::Symbol)>,
        ::CommandVersion
    );

    MCNAPI void addSemanticConstraint(::SemanticConstraint);

    MCNAPI int addSoftEnum(std::string const&, std::vector<std::string>);

    MCNAPI void addSoftEnumValues(std::string const&, std::vector<std::string>);

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
    );

    MCNAPI void registerOverloadInternal(::CommandRegistry::Signature&, ::CommandRegistry::Overload&);

    MCNAPI void removeSoftEnumValues(std::string const&, std::vector<std::string>);

    MCNAPI bool requiresCheatsEnabled(std::string const&) const;

    MCNAPI ::AvailableCommandsPacket serializeAvailableCommands() const;

    MCNAPI void
        setCommandRegistrationOverride(std::function<void(const std::string&, CommandFlag&, CommandPermissionLevel&)>);

    MCNAPI void setScoreCallback(std::function<int(bool&, const std::string&, const Actor&)>);

    MCNAPI void setSoftEnumValues(std::string const&, std::vector<std::string>);

    MCNAPI void setupChainedSubcommandOverloadRules(::CommandRegistry::Signature&);

    MCNAPI void setupOverloadRules(::CommandRegistry::Signature&);

    MCNAPI std::string symbolToString(::CommandRegistry::Symbol) const;

    MCNAPI ~CommandRegistry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::BlockType const* _getBlockFromCmdParameters(std::string const&);

    MCNAPI static std::string _removeStringQuotes(std::string const&);

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
    );

    MCNAPI static ::CommandRegistry::ParseToken* collapse(::CommandRegistry::ParseToken&, ::CommandRegistry::Symbol);

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
    );

    MCNAPI static bool
    readString(std::string&, ::CommandRegistry::ParseToken const&, std::string&, std::vector<std::string>&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static char const*& CODE_STATUS_PROPERTY_NAME();

    MCNAPI static char const*& COMMAND_NAME_ENUM_NAME();

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::CommandRegistryArguments);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
