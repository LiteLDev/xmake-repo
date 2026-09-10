#include "ll/core/mod/ModOwner.h"

namespace ll::android {
namespace {
thread_local OwnerContext ownerContext;
}
OwnerContext currentOwner() noexcept { return ownerContext; }
OwnerScope::OwnerScope(ModOwner& owner, ModPhase phase, uint64_t token, void const* source) noexcept
: previous(ownerContext) {
    ownerContext = {&owner, phase, token, source};
}
OwnerScope::~OwnerScope() { ownerContext = previous; }
} // namespace ll::android
