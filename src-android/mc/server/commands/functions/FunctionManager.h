#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#include "mc/server/commands/functions/FunctionState.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandRegistry;
class FunctionEntry;
class GameRule;
class ICommandDispatcher;
class IFunctionEntry;
class ResourcePackManager;
namespace Core { class Path; }
namespace Json { class Value; }
// clang-format on

class FunctionManager {
public:
    // FunctionManager inner types declare
    // clang-format off
    struct QueuedCommand;
    struct OriginMapping;
    struct TickFunction;
    // clang-format on

    // FunctionManager inner types define
    struct QueuedCommand {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IFunctionEntry*>                     mFunction;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const CommandOrigin*>> mOrigin;
        // NOLINTEND

    public:
        // prevent constructor by default
        QueuedCommand& operator=(QueuedCommand const&);
        QueuedCommand(QueuedCommand const&);
        QueuedCommand();
    };

    struct OriginMapping {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
        ::ll::TypedStorage<4, 4, uint>                           mRefCount;
        // NOLINTEND

    public:
        // prevent constructor by default
        OriginMapping& operator=(OriginMapping const&);
        OriginMapping(OriginMapping const&);
        OriginMapping();
    };

    struct TickFunction {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<FunctionEntry*>> mFunction;
        ::ll::TypedStorage<1, 1, ::FunctionQueueOrder>            mOrder;
        // NOLINTEND

    public:
        // prevent constructor by default
        TickFunction& operator=(TickFunction const&);
        TickFunction(TickFunction const&);
        TickFunction();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::GameRule const*>                            mGameRule;
    ::ll::TypedStorage<1, 1, bool>                                         mIsProcessingStack;
    ::ll::TypedStorage<8, 8, ulong>                                        mInsertPoint;
    ::ll::TypedStorage<4, 4, int>                                          mExecutionCount;
    ::ll::TypedStorage<8, 24, std::vector<FunctionManager::QueuedCommand>> mCommandList;
    ::ll::TypedStorage<8, 40, std::unordered_map<const CommandOrigin*, FunctionManager::OriginMapping>> mOriginMap;
    ::ll::TypedStorage<8, 8, std::unique_ptr<ICommandDispatcher>>                              mCommandDispatcher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>>                                   mTickOrigin;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<FunctionEntry>>> mFunctions;
    ::ll::TypedStorage<8, 24, std::vector<FunctionManager::TickFunction>>                      mTickFunctions;
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FunctionManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FunctionManager(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, ::GameRule const*);

    MCNAPI ::CommandOrigin const& _addOriginReference(::CommandOrigin const&, uint);

    MCNAPI int _processCommandStack(::FunctionEntry&, ::CommandOrigin const&, ::FunctionQueueOrder);

    MCNAPI int execute(::FunctionEntry&, ::CommandOrigin const&, ::FunctionQueueOrder);

    MCNAPI ::FunctionEntry* getFunction(std::string const&);

    MCNAPI void load(::ResourcePackManager&, ::CommandRegistry&);

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::FunctionQueueOrder getQueueOrderForCommandVersion(::CurrentCmdVersion);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, ::GameRule const*);
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
