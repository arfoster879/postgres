/*-------------------------------------------------------------------------
 *
 * nodeLimit.h
 *
 *
 *
 * Portions Copyright (c) 1996-2002, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * $Id: nodeLimit.h,v 1.6 2002/06/20 20:29:49 momjian Exp $
 *
 *-------------------------------------------------------------------------
 */
#ifndef NODELIMIT_H
#define NODELIMIT_H

#include "nodes/plannodes.h"

extern TupleTableSlot *ExecLimit(Limit *node);
extern bool ExecInitLimit(Limit *node, EState *estate, Plan *parent);
extern int	ExecCountSlotsLimit(Limit *node);
extern void ExecEndLimit(Limit *node);
extern void ExecReScanLimit(Limit *node, ExprContext *exprCtxt, Plan *parent);

#endif   /* NODELIMIT_H */
