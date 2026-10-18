#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestHelper; }
namespace gametest { class IGameTestFunctionContext; }
namespace gametest { class IGameTestFunctionRunResult; }
// clang-format on

namespace gametest {

class BaseGameTestFunction {
public:
#if defined(LL_PLAT_A) // @header-generator platform
    // BaseGameTestFunction inner types define
    using TagList = std::vector<std::string>;

public:
#else // @header-generator platform
#endif // @header-generator platform
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::vector<std::string>>    mTags;
    ::ll::TypedStorage<8, 24, std::string>                 mBatchName;
    ::ll::TypedStorage<8, 24, std::string>                 mTestName;
    ::ll::TypedStorage<8, 24, std::string>                 mStructureName;
    ::ll::TypedStorage<4, 16, std::optional<BlockPos>>     mStructureLocation;
    ::ll::TypedStorage<4, 8, std::optional<DimensionType>> mStructureDimension;
    ::ll::TypedStorage<1, 1, bool>                         mRequired;
    ::ll::TypedStorage<4, 4, int>                          mMaxAttempts;
    ::ll::TypedStorage<4, 4, int>                          mRequiredSuccesses;
    ::ll::TypedStorage<4, 4, int>                          mMaxTicks;
    ::ll::TypedStorage<4, 4, int>                          mSetupTicks;
    ::ll::TypedStorage<4, 4, int>                          mPadding;
    ::ll::TypedStorage<1, 1, bool>                         mRotate;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnk103145;
    ::ll::UntypedStorage<8, 32> mUnkd5830f;
    ::ll::UntypedStorage<8, 32> mUnk5b45ab;
    ::ll::UntypedStorage<8, 32> mUnkfb10aa;
    ::ll::UntypedStorage<4, 16> mUnk5533a3;
    ::ll::UntypedStorage<4, 8>  mUnke22e3d;
    ::ll::UntypedStorage<1, 1>  mUnk42288f;
    ::ll::UntypedStorage<4, 4>  mUnkf34e45;
    ::ll::UntypedStorage<4, 4>  mUnk8b439f;
    ::ll::UntypedStorage<4, 4>  mUnk3ffdca;
    ::ll::UntypedStorage<4, 4>  mUnkedce45;
    ::ll::UntypedStorage<4, 4>  mUnkb17bec;
    ::ll::UntypedStorage<1, 1>  mUnka1ced5;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    BaseGameTestFunction& operator=(BaseGameTestFunction const&);
    BaseGameTestFunction(BaseGameTestFunction const&);
#endif // @header-generator platform
    BaseGameTestFunction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~BaseGameTestFunction();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::IGameTestFunctionContext> createContext(::gametest::BaseGameTestHelper&) const = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionContext>
    createContext(::gametest::BaseGameTestHelper& helper) const = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<gametest::IGameTestFunctionRunResult> run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const = 0;
    // clang-format on
#else // @header-generator platform
    virtual ::std::unique_ptr<::gametest::IGameTestFunctionRunResult>
    run(::gametest::BaseGameTestHelper&, ::gametest::IGameTestFunctionContext&) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BaseGameTestFunction(
#if defined(LL_PLAT_A) // @header-generator platform
        std::string,
        std::string,
        std::string,
        int,
        int,
        int,
        bool,
        bool,
        int,
        int,
        std::vector<std::string>
#else // @header-generator platform
        ::std::string                batchName,
        ::std::string                testName,
        ::std::string                structureName,
        int                          maxTicks,
        int                          setupTicks,
        int                          padding,
        bool                         rotate,
        bool                         required,
        int                          requiredSuccesses,
        int                          attempts,
        ::std::vector<::std::string> tags
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addTag(std::string);
#else // @header-generator platform
    MCNAPI void _addTag(::std::string tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool getRotate() const;

    MCNAPI std::string const& getTestName() const;

    MCNAPI bool hasTag(std::string const&) const;
#else // @header-generator platform
    MCNAPI bool hasTag(::std::string const& tag) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void*
    $ctor(std::string, std::string, std::string, int, int, int, bool, bool, int, int, std::vector<std::string>);
#else // @header-generator platform
    MCNAPI void* $ctor(
        ::std::string                batchName,
        ::std::string                testName,
        ::std::string                structureName,
        int                          maxTicks,
        int                          setupTicks,
        int                          padding,
        bool                         rotate,
        bool                         required,
        int                          requiredSuccesses,
        int                          attempts,
        ::std::vector<::std::string> tags
    );
#endif // @header-generator platform
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

} // namespace gametest
