#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"
#include "mc/molang/MolangVersion.h"
#include "mc/platform/threading/SpinLockImpl.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockState;
class BlockType;
class CompoundTag;
class ExpressionNode;
namespace SharedTypes::Legacy { struct BlockDescriptor; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockDescriptor {
public:
    // BlockDescriptor inner types declare
    // clang-format off
    class ResolveHelper;
    class ResolvedState;
    struct State;
    // clang-format on

    // BlockDescriptor inner types define
    enum CompareType : uint {
        AnyTag    = 0,
        BlockName = 1,
        States    = 2,
        Unknown   = 3,
    };

    class ResolveHelper {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockDescriptor&> mBlockDescriptor;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolveHelper& operator=(ResolveHelper const&);
        ResolveHelper(ResolveHelper const&);
        ResolveHelper();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void resolve(bool);
        // NOLINTEND
    };

    class ResolvedState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::gsl::not_null<const BlockState*>> mBlockState;
        ::ll::TypedStorage<4, 4, int>                                mValue;
        // NOLINTEND

    public:
        // prevent constructor by default
        ResolvedState& operator=(ResolvedState const&);
        ResolvedState(ResolvedState const&);
        ResolvedState();
    };

    struct State {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString> mName;
        ::ll::UntypedStorage<8, 32>               mState;
        // NOLINTEND

    public:
        // prevent constructor by default
        State();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI State(::HashedString, std::string const&);

        MCNAPI State(::HashedString, int);

        MCNAPI ~State();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::HashedString, std::string const&);

        MCNAPI void* $ctor(::HashedString, int);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    using CompoundProxy = ::SharedTypes::Legacy::BlockDescriptor::Compound;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::BlockDescriptor::ResolveHelper>             mResolveHelper;
    ::ll::TypedStorage<8, 40, ::HashedString>                              mBlockName;
    ::ll::TypedStorage<1, 1, bool>                                         mIsComplexAlias;
    ::ll::TypedStorage<8, 16, std::shared_ptr<ExpressionNode>>             mTags;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor::State>>         mRawStates;
    ::ll::TypedStorage<8, 24, std::vector<BlockDescriptor::ResolvedState>> mResolvedStates;
    ::ll::TypedStorage<4, 4, ::BlockDescriptor::CompareType>               mCompareType;
    ::ll::TypedStorage<1, 1, bool>                                         mContentLogOnError;
    ::ll::TypedStorage<8, 8, ::Block const*>                               mBlock;
    ::ll::TypedStorage<1, 1, bool>                                         mValid;
    ::ll::TypedStorage<1, 1, bool>                                         mIsDeferred;
    ::ll::TypedStorage<8, 24, ::SpinLockImpl>                              mLock;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockDescriptor();

    MCNAPI explicit BlockDescriptor(::SharedTypes::Legacy::BlockDescriptor);

    MCNAPI BlockDescriptor(::BlockDescriptor const&);

    MCNAPI BlockDescriptor(::BlockDescriptor&&);

    MCNAPI bool _anyTagsMatch(::Block const&) const;

    MCNAPI bool _statesMatch(::Block const&) const;

    MCNAPI ::Block const& getBlockOrUnknownBlock() const;

    MCNAPI ::BlockDescriptor::CompareType const& getCompareType() const;

    MCNAPI std::string const& getFullName() const;

    MCNAPI std::vector<BlockDescriptor::State> const& getStates() const;

    MCNAPI std::string getTagExpression() const;

    MCNAPI bool isValid() const;

    MCNAPI bool matches(::Block const&) const;

    MCNAPI bool matches(::BlockDescriptor const&) const;

    MCNAPI void operator=(::BlockDescriptor const&);

    MCNAPI void operator=(::BlockDescriptor&&);

    MCNAPI bool operator==(::BlockDescriptor const&) const;

    MCNAPI void setContentLogOnError(bool) const;

    MCNAPI std::unique_ptr<CompoundTag> toCompoundTag() const;

    MCNAPI ::Block const* tryGetBlock() const;

    MCNAPI ::Block const* tryGetBlockNoLogging() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool anyMatch(std::vector<BlockDescriptor> const&, ::Block const&);

    MCNAPI static bool anyMatch(std::vector<BlockDescriptor> const&, ::BlockDescriptor const&);

    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static ::BlockDescriptor fromCompoundTag(::CompoundTag const&);

    MCNAPI static ::BlockDescriptor fromTagExpression(std::string const&, ::MolangVersion const);

    MCNAPI static ::SharedTypes::Legacy::BlockDescriptor toSharedTypes(::BlockDescriptor const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[5]> JSON_NAME_FIELD();

    MCNAPI static ::std::add_lvalue_reference_t<char const[7]> JSON_STATES_FIELD();

    MCNAPI static ::std::add_lvalue_reference_t<char const[5]> JSON_TAGS_FIELD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::Legacy::BlockDescriptor);

    MCNAPI void* $ctor(::BlockDescriptor const&);

    MCNAPI void* $ctor(::BlockDescriptor&&);
    // NOLINTEND
};
