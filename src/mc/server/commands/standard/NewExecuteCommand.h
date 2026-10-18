#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/BlockStateCommandParam.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandBlockName.h"
#include "mc/server/commands/CommandChainedSubcommand.h"
#include "mc/server/commands/CommandCompareOperator.h"
#include "mc/server/commands/CommandIntegerRange.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/CommandPositionFloat.h"
#include "mc/server/commands/CommandSelector.h"
#include "mc/server/commands/RelativeFloat.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
#if defined(LL_PLAT_A) // @header-generator platform
class BlockPos;
class BlockSource;
#else // @header-generator platform
class BlockStateCommandParam;
#endif // @header-generator platform
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Scoreboard;
struct ScoreInfo;
#if defined(LL_PLAT_A) // @header-generator platform
struct ScoreboardId;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class NewExecuteCommand : public ::Command {
public:
    // NewExecuteCommand inner types declare
    // clang-format off
    class ExecuteChainedSubcommand;
    // clang-format on

    // NewExecuteCommand inner types define
    class ExecuteChainedSubcommand : public ::CommandChainedSubcommand {
    public:
        // ExecuteChainedSubcommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
        enum class Subcommand : int {
            None       = 0,
            as         = 1,
            at         = 2,
            in         = 3,
            positioned = 4,
            rotated    = 5,
            facing     = 6,
            entity     = 7,
            align      = 8,
            anchored   = 9,
            _if        = 10,
            unless     = 11,
            run        = 12,
        };

#else // @header-generator platform
#endif // @header-generator platform
        enum class ConditionSubcommand : int {
            None   = 0,
#if defined(LL_PLAT_A) // @header-generator platform
            block  = 1,
            blocks = 2,
            entity = 3,
            score  = 4,
#else // @header-generator platform
            Block  = 1,
            Blocks = 2,
            Entity = 3,
            Score  = 4,
#endif // @header-generator platform
        };

        enum class ScanMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
            all    = 0,
            masked = 1,
#else // @header-generator platform
            All    = 0,
            Masked = 1,
#endif // @header-generator platform
        };

        enum class ScoreRangeMode : int {
#if defined(LL_PLAT_A) // @header-generator platform
            off = 0,
            on  = 1,
#else // @header-generator platform
            Off = 0,
            On  = 1,
        };

        enum class Subcommand : int {
            None       = 0,
            As         = 1,
            At         = 2,
            In         = 3,
            Positioned = 4,
            Rotated    = 5,
            Facing     = 6,
            Entity     = 7,
            Align      = 8,
            Anchored   = 9,
            If         = 10,
            Unless     = 11,
            Run        = 12,
#endif // @header-generator platform
        };

    public:
        // virtual functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        virtual ~ExecuteChainedSubcommand();

        virtual std::string getCommandName() const;
#else // @header-generator platform
        virtual ::std::string getCommandName() const /*override*/;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static void setup(::CommandRegistry&);
#else // @header-generator platform
        MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& CHAINED_OPTION_0();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_ALIGN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCK();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_ANCHORED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCKS();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_AS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_ENTITY();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_AT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_SCORE();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_FACING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_ALIGN();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_IF();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_ANCHORED();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_IN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_AS();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_ALIGN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_AT();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_ANCHORED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_BLOCK();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_AS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_BLOCKS();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_AT();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_ENTITY();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_FACING();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_FACING();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_IF_UNLESS();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_IF();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_IN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_IN();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_POSITIONED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_ALIGN();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_ROTATED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_ANCHORED();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_OPTION_RUN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_AS();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_POSITIONED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_AT();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_ROTATED();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_ENTITY();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_RUN();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI static char const*& SUBCOMMAND_OPTION_FACING();

        MCNAPI static char const*& SUBCOMMAND_OPTION_IF_UNLESS();

        MCNAPI static char const*& SUBCOMMAND_OPTION_IN();

        MCNAPI static char const*& SUBCOMMAND_OPTION_POSITIONED();

        MCNAPI static char const*& SUBCOMMAND_OPTION_ROTATED();

        MCNAPI static char const*& SUBCOMMAND_OPTION_RUN();

        MCNAPI static char const*& SUBCOMMAND_POSITIONED();

        MCNAPI static char const*& SUBCOMMAND_ROTATED();

        MCNAPI static char const*& SUBCOMMAND_RUN();

        MCNAPI static char const*& SUBCOMMAND_SCORE();

        MCNAPI static char const*& SUBCOMMAND_UNLESS();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
#else // @header-generator platform
        MCAPI static char const*& SUBCOMMAND_UNLESS();
#endif // @header-generator platform
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        MCNAPI std::string $getCommandName() const;
        // NOLINTEND
#else // @header-generator platform
        MCAPI ::std::string $getCommandName() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSubcommandOption;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSecondarySubcommandOption;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ConditionSubcommand> mConditionSubcommandOption;
    ::ll::UntypedStorage<8, 200> mTargets;
    ::ll::UntypedStorage<8, 200> mSources;
    ::ll::TypedStorage<8, 24, std::string> mAxesAlignment;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation> mActorLocation;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat> mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition> mBlockPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition> mEndPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition> mDestination;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mRotationX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat> mRotationY;
    ::ll::TypedStorage<4, 4, ::DimensionType> mTargetDimension;
    ::ll::TypedStorage<8, 8, ::CommandBlockName> mBlock;
    ::ll::TypedStorage<8, 24, std::vector<BlockStateCommandParam>> mBlockStates;
    ::ll::TypedStorage<4, 4, int> mBlockData;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScanMode> mScanMode;
    ::ll::TypedStorage<8, 24, std::string> mTargetScoreObjective;
    ::ll::TypedStorage<8, 24, std::string> mSourceScoreObjective;
    ::ll::TypedStorage<1, 1, ::CommandCompareOperator> mCompareOperator;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ConditionSubcommand>
                                                                                            mConditionSubcommandOption;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>                                  mTargets;
    ::ll::TypedStorage<8, 200, ::CommandSelector<::Actor>>                                  mSources;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mAxesAlignment;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorLocation>                          mActorLocation;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>                                       mPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mBlockPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mEndPosition;
    ::ll::TypedStorage<4, 16, ::CommandPosition>                                            mDestination;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                                               mRotationX;
    ::ll::TypedStorage<4, 8, ::RelativeFloat>                                               mRotationY;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                               mTargetDimension;
    ::ll::TypedStorage<8, 8, ::CommandBlockName>                                            mBlock;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockStateCommandParam>>                      mBlockStates;
    ::ll::TypedStorage<4, 4, int>                                                           mBlockData;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScanMode>       mScanMode;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mTargetScoreObjective;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mSourceScoreObjective;
    ::ll::TypedStorage<1, 1, ::CommandCompareOperator>                                      mCompareOperator;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScoreRangeMode> mRangeMode;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 16> mRange;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>> mCommand;
    ::ll::TypedStorage<8, 16, ::NewExecuteCommand::ExecuteChainedSubcommand> mChainedCommand;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<4, 12, ::CommandIntegerRange>                                        mRange;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Command>>                                  mCommand;
    ::ll::TypedStorage<8, 16, ::NewExecuteCommand::ExecuteChainedSubcommand>                mChainedCommand;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~NewExecuteCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<ScoreInfo> _getScoreFromSelectorOnObjective(
        ::Scoreboard const&,
        ::CommandSelector<Actor> const&,
        std::string const&,
        ::CommandOrigin const&,
        ::CommandOutput&
#else // @header-generator platform
    MCAPI ::std::optional<::ScoreInfo> _getScoreFromSelectorOnObjective(
        ::Scoreboard const&               scoreboard,
        ::CommandSelector<::Actor> const& selector,
        ::std::string const&              objectiveName,
        ::CommandOrigin const&            origin,
        ::CommandOutput&                  output
#endif // @header-generator platform
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry, int newExecuteStartVersion);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
