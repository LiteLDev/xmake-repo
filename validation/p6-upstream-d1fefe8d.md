# Frozen upstream increment

The ordinary merge incorporates `d1fefe8d71b960a82c812380d91cccebbae63d16` (parented on the previously frozen upstream main history). Its entire upstream change is the inline `Block::getMaterial()` accessor in the common Windows Header.

Git's rename detection applied that common-file edit to this fork's server layer. The same two lines were explicitly mirrored into the client layer, because upstream has no client/server `Block.h` override and its common Header is effective for both desktop targets. Android retains its generated API and continues compiling Minecraft headers only from frozen Header S; no Android signature or input was upgraded.

The incremental source audit consists of these two platform `Block.h` files. `src/ll` stays at tree `34da55c4bbbfeaca8b388407155f2f25dbdf71a1`. The baseline M/H/S references remain historical frozen inputs; this commit records the additional main-branch accessor separately. Windows regression evidence is recorded after the merge and is not implied by this note.
