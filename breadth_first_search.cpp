#include <iostream>
#include <list>

using namespace std;

class Graph {
    int V;          // Количество вершин
    list<int> *adj; // Список смежности
public:
    Graph(int V);   // Конструктор

    // Добавление BFS, начиная с вершин s
    void BFS(int s);
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::BFS(int s) {
    // Помечаем все вершины как непосещенные
    bool *visited = new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;

    // Создаём очередь для BFS
    list<int> queue;

    // Помечаем текущую вершину как посещенную и помещаем ее в очередь
    visited[s] = true;
    queue.push_back(s);

    // Итератор 'i' будет использоваться для получения всех соседей вершины V
    list<int>::iterator i;

    while(!queue.empty()) {
        // Деанонсируем вершину из очереди и выводим ее
        s = queue.front();
        cout << s << " ";
        queue.pop_front();

        for (i = adj[s].begin(); i != adj[s].end(); ++i) {
            if(!visited[*i]) {
                queue.push_back(*i);
                visited[*i] = true;
            }
        }
        }
}



// Программа для тестирования методов класса Graph
int main() {
    // Создаём граф
    Graph g(4)
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Поиск в ширину, начиная с вершины 2\n"
    g.BFS(2);

    return 0;
}