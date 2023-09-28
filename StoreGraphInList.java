import java.util.*;

public class StoreGraphInList {
    public static void main(String[] args) {
//        withOutWeight();
        withWeight();
    }

    public static void withOutWeight(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter No of nodes");
        int nodes = sc.nextInt();

        System.out.println("Enter No of edges");
        int edges = sc.nextInt();

        ArrayList<ArrayList<Integer>> adj = new ArrayList<>(nodes+1);

        for(int i=0; i<=nodes; i++){
            adj.add(new ArrayList<>());
        }


        for(int i=0; i<edges; i++){
            System.out.println("Enter node");
            int u = sc.nextInt();

            System.out.println("Enter connected node");
            int v = sc.nextInt();

            adj.get(u).add(v);
            adj.get(v).add(u);
        }
        System.out.println(adj);
    }

    public static void withWeight(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter No of nodes");
        int nodes = sc.nextInt();

        System.out.println("Enter No of edges");
        int edges = sc.nextInt();

        Map<Integer,Map<Integer, Integer>> map = new HashMap<>(nodes+1);


        for(int i=0; i<edges; i++){
            System.out.println("Enter node");
            int u = sc.nextInt();

            System.out.println("Enter connected node");
            int v = sc.nextInt();

            System.out.println("Enter connected weight");
            int w = sc.nextInt();

            if(!map.containsKey(u)){
                map.put(u, new HashMap<>());
            }
            map.get(u).put(v, w);

            if(!map.containsKey(v)){
                map.put(v, new HashMap<>());
            }
            map.get(v).put(u, w);
        }
        System.out.println(map);
    }
}
