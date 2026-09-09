#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/server/commands/BlockStateCommandParam.h"
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
class BlockPos;
class BlockSource;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Scoreboard;
struct ScoreInfo;
struct ScoreboardId;
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

        enum class ConditionSubcommand : int {
            None   = 0,
            block  = 1,
            blocks = 2,
            entity = 3,
            score  = 4,
        };

        enum class ScanMode : int {
            all    = 0,
            masked = 1,
        };

        enum class ScoreRangeMode : int {
            off = 0,
            on  = 1,
        };

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ExecuteChainedSubcommand();

        virtual std::string getCommandName() const;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void setup(::CommandRegistry&);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static char const*& CHAINED_OPTION_0();

        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCK();

        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_BLOCKS();

        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_ENTITY();

        MCNAPI static char const*& CONDITION_SUBCOMMAND_OPTION_SCORE();

        MCNAPI static char const*& SUBCOMMAND_ALIGN();

        MCNAPI static char const*& SUBCOMMAND_ANCHORED();

        MCNAPI static char const*& SUBCOMMAND_AS();

        MCNAPI static char const*& SUBCOMMAND_AT();

        MCNAPI static char const*& SUBCOMMAND_BLOCK();

        MCNAPI static char const*& SUBCOMMAND_BLOCKS();

        MCNAPI static char const*& SUBCOMMAND_ENTITY();

        MCNAPI static char const*& SUBCOMMAND_FACING();

        MCNAPI static char const*& SUBCOMMAND_IF();

        MCNAPI static char const*& SUBCOMMAND_IN();

        MCNAPI static char const*& SUBCOMMAND_OPTION_ALIGN();

        MCNAPI static char const*& SUBCOMMAND_OPTION_ANCHORED();

        MCNAPI static char const*& SUBCOMMAND_OPTION_AS();

        MCNAPI static char const*& SUBCOMMAND_OPTION_AT();

        MCNAPI static char const*& SUBCOMMAND_OPTION_ENTITY();

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
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI std::string $getCommandName() const;
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSubcommandOption;
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::Subcommand> mSecondarySubcommandOption;
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
    ::ll::TypedStorage<4, 4, ::NewExecuteCommand::ExecuteChainedSubcommand::ScoreRangeMode> mRangeMode;
    ::ll::UntypedStorage<4, 16> mRange;
    ::ll::TypedStorage<8, 8, std::unique_ptr<Command>> mCommand;
    ::ll::TypedStorage<8, 16, ::NewExecuteCommand::ExecuteChainedSubcommand> mChainedCommand;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NewExecuteCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<ScoreInfo> _getScoreFromSelectorOnObjective(
        ::Scoreboard const&,
        ::CommandSelector<Actor> const&,
        std::string const&,
        ::CommandOrigin const&,
        ::CommandOutput&
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void setup(::CommandRegistry&, int);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
