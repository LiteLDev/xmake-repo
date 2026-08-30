#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionOp.h"
#include "mc/util/molang/SourceTree.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Molang::details { class ExpressionNode; }
namespace Molang::details { class IComplexExpression; }
namespace Molang::details { class Program; }
#ifndef LL_GENERATED_ANDROID_BASE_STUB_MOLANG__DETAILS__COMPILEDEXPRESSION
#define LL_GENERATED_ANDROID_BASE_STUB_MOLANG__DETAILS__COMPILEDEXPRESSION
namespace Molang::details { class CompiledExpression {}; }
#endif
// clang-format on

namespace Molang::details {

class CompiledExpressionWithSource : public ::Molang::details::CompiledExpression {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 144, ::Molang::details::SourceTree> mSource;
    // NOLINTEND

public:
    // prevent constructor by default
    CompiledExpressionWithSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CompiledExpressionWithSource();

    virtual std::unique_ptr<Molang::details::IComplexExpression> clone() const;

    virtual void replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);

    virtual void validateArrayVariables() const;

    virtual ::ExpressionOp getOp() const;

    virtual bool needsToCompile() const;

    virtual ::Molang::details::SourceTree* getSource();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::unique_ptr<Molang::details::IComplexExpression> $clone() const;

    MCNAPI void $replaceArrayVariables(std::unordered_map<HashedString, Molang::details::ExpressionNode>&);

    MCNAPI void $validateArrayVariables() const;

    MCNAPI ::ExpressionOp $getOp() const;

    MCNAPI bool $needsToCompile() const;

    MCNAPI ::Molang::details::SourceTree* $getSource();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Molang::details
