#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CurrentCmdVersion.h"
#else // @header-generator platform
#include "mc/server/commands/CommandOrigin.h"
#endif // @header-generator platform
#include "mc/server/commands/functions/FunctionQueueOrder.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/functions/FunctionState.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class CommandOrigin;
#else // @header-generator platform
#endif // @header-generator platform
class CommandRegistry;
class FunctionEntry;
class GameRule;
class ICommandDispatcher;
class IFunctionEntry;
class ResourcePackManager;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class Path; }
namespace Json { class Value; }
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class FunctionManager {
public:
    // FunctionManager inner types declare
    // clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
    struct QueuedCommand;
#else // @header-generator platform
#endif // @header-generator platform
    struct OriginMapping;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct QueuedCommand;
#endif // @header-generator platform
    struct TickFunction;
    // clang-format on

    // FunctionManager inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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

#else // @header-generator platform
#endif // @header-generator platform
    struct OriginMapping {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
        ::ll::TypedStorage<4, 4, uint>                           mRefCount;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
        ::ll::TypedStorage<4, 4, uint>                               mRefCount;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    };
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    struct QueuedCommand {
#endif // @header-generator platform
    public:
#if defined(LL_PLAT_A) // @header-generator platform
        // prevent constructor by default
        OriginMapping& operator=(OriginMapping const&);
        OriginMapping(OriginMapping const&);
        OriginMapping();
#else // @header-generator platform
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::IFunctionEntry*>                       mFunction;
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::CommandOrigin const*>> mOrigin;
        // NOLINTEND
#endif // @header-generator platform
    };

    struct TickFunction {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<FunctionEntry*>> mFunction;
        ::ll::TypedStorage<1, 1, ::FunctionQueueOrder>            mOrder;
#else // @header-generator platform
        ::ll::TypedStorage<8, 8, ::gsl::not_null<::FunctionEntry*>> mFunction;
        ::ll::TypedStorage<1, 1, ::FunctionQueueOrder>              mOrder;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

    public:
        // prevent constructor by default
        TickFunction& operator=(TickFunction const&);
        TickFunction(TickFunction const&);
        TickFunction();
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::GameRule const*>                                mGameRule;
    ::ll::TypedStorage<1, 1, bool>                                             mIsProcessingStack;
    ::ll::TypedStorage<8, 8, uint64>                                           mInsertPoint;
    ::ll::TypedStorage<4, 4, int>                                              mExecutionCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::FunctionManager::QueuedCommand>> mCommandList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::CommandOrigin const*, ::FunctionManager::OriginMapping>>
                                                                      mOriginMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ICommandDispatcher>> mCommandDispatcher;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>>      mTickOrigin;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::FunctionEntry>>> mFunctions;
    ::ll::TypedStorage<8, 24, ::std::vector<::FunctionManager::TickFunction>>                          mTickFunctions;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionManager();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FunctionManager();
#else // @header-generator platform
    virtual ~FunctionManager() = default;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI FunctionManager(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, ::GameRule const*);
#else // @header-generator platform
    MCAPI FunctionManager(
        ::std::unique_ptr<::ICommandDispatcher> commandDispatcher,
        ::std::unique_ptr<::CommandOrigin>      tickOrigin,
        ::GameRule const*                       gameRule
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOrigin const& _addOriginReference(::CommandOrigin const&, uint);
#else // @header-generator platform
    MCAPI ::CommandOrigin const& _addOriginReference(::CommandOrigin const& origin, uint amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int _processCommandStack(::FunctionEntry&, ::CommandOrigin const&, ::FunctionQueueOrder);
#else // @header-generator platform
    MCAPI int
    _processCommandStack(::FunctionEntry& toExecute, ::CommandOrigin const& origin, ::FunctionQueueOrder order);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI int execute(::FunctionEntry&, ::CommandOrigin const&, ::FunctionQueueOrder);
#else // @header-generator platform
    MCAPI void _removeOriginReference(::CommandOrigin const& origin, uint amount);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::FunctionEntry* getFunction(std::string const&);
#else // @header-generator platform
    MCAPI ::FunctionEntry* getFunction(::std::string const& functionName);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void load(::ResourcePackManager&, ::CommandRegistry&);

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::FunctionQueueOrder getQueueOrderForCommandVersion(::CurrentCmdVersion);
#else // @header-generator platform
    MCAPI void load(::ResourcePackManager& serverPackManager, ::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(std::unique_ptr<ICommandDispatcher>, std::unique_ptr<CommandOrigin>, ::GameRule const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor(
        ::std::unique_ptr<::ICommandDispatcher> commandDispatcher,
        ::std::unique_ptr<::CommandOrigin>      tickOrigin,
        ::GameRule const*                       gameRule
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
