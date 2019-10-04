#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        n = 3;
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        edge = G.edge;
    }

    void AddEdge(int a, int b) {
        // Your code here
        edge[a][b] = true;
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        edge[a][b] = false;
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        return edge[a][b];
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph ret(n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                ret.edge[i][j] = edge[j][i];
        return ret;
    }

protected:
    int n;
    // Your code here
    vector<vector<bool>> edge;
};
#endif // __DENSE_GRAPH_H__
